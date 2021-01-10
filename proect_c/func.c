#include "func.h"

/* 
	Взема чайлд елементите на структура.
	Приема един аргумент:
				xmlNode * nodе - пойнтер към първия елемент на файла.
*/
int is_leaf(xmlNode * node)
{
  xmlNode * child = node->children;
  while(child)
  {
    if(child->type == XML_ELEMENT_NODE) return 0;

    child = child->next;
  }

  return 1;
}

/*
   Принтира Даните от XML фаил.
   Приема 2 аргумента:
   				xmlNode * nodе - пойнтер към първия елемент на XML файла.
				int indent_len.
*/
void print_xml(xmlNode * node, int indent_len)
{
    while(node)
    {
        if(node->type == XML_ELEMENT_NODE)
        {
        	//printf("%*c%s:%s\n", indent_len*2, '-', node->name, is_leaf(node)?xmlNodeGetContent(node):xmlGetProp(node, (const xmlChar*)"id"));
			printf("%s", is_leaf(node)?xmlNodeGetContent(node):xmlGetProp(node, (const xmlChar*)"id"));
			printf("\n");
		}
        print_xml(node->children, indent_len + 1);
        node = node->next;
    }
}

/*
   Копира Даните от XML файл в друг текстов файл.
   Приема 2 аргумента:
				FILE *fp - пойнтер към текстовия файл.
   				xmlNode * nodе - пойнтер към първия елемент на XML файла.
				int indent_len.
*/
void copy_xml(FILE *fp, xmlNode *node, int indent_len){
	while(node){
		if(node->type == XML_ELEMENT_NODE){
			fprintf(fp, "%s\n", is_leaf(node)?xmlNodeGetContent(node):xmlGetProp(node, (const xmlChar*)"id"));
		}
		copy_xml(fp, node->children, indent_len + 1);
		node = node->next;
	}
}

void copy_xml_diff(FILE *fp, xmlNode *node1, xmlNode *node2, int indent_len){
	while(node1){
		if(node1->type == XML_ELEMENT_NODE){
			xmlChar *scan1 = is_leaf(node1)?xmlNodeGetContent(node1):xmlGetProp(node1, (const xmlChar*)"id");
			xmlChar *scan2 = is_leaf(node2)?xmlNodeGetContent(node2):xmlGetProp(node2, (const xmlChar*)"id");
			if(scan1 != scan2){
				fprintf(fp, "%s\n", is_leaf(node1)?xmlNodeGetContent(node1):xmlGetProp(node1, (const xmlChar*)"id"));
			}
		}
		copy_xml_diff(fp, node1->children, node2->children, indent_len + 1);
		node1 = node1->next;
		node2 = node2->next;
	}
}

/* Валидира XML файл чрез  XSD файл схема.
   Приема 2 аргумента:
   			char *XMLFileName - Пойнтер към пъреия елемент на XML файл.
			char *XSDFileName - Пойнтер към пъреия елемент на XSD файл.
*/
void validateXML(char *XMLFileName, char *XSDFileName)
{

	xmlDocPtr doc;
	xmlSchemaPtr schema = NULL;
	xmlSchemaParserCtxtPtr ctxt;
	int ret;

	xmlLineNumbersDefault(1);

	ctxt = xmlSchemaNewParserCtxt(XSDFileName);

	xmlSchemaSetParserErrors(ctxt, (xmlSchemaValidityErrorFunc) fprintf, (xmlSchemaValidityWarningFunc) fprintf, stderr);
	schema = xmlSchemaParse(ctxt);
	xmlSchemaFreeParserCtxt(ctxt);


	doc = xmlReadFile(XMLFileName, NULL, 0);

	if (doc == NULL){
		fprintf(stderr, "Could not parse %s\n", XMLFileName);
	}
	else{
		xmlSchemaValidCtxtPtr ctxt;

		ctxt = xmlSchemaNewValidCtxt(schema);
		xmlSchemaSetValidErrors(ctxt, (xmlSchemaValidityErrorFunc) fprintf, (xmlSchemaValidityWarningFunc) fprintf, stderr);
		ret = xmlSchemaValidateDoc(ctxt, doc);

		if (ret == 0){
			printf("%s validates\n", XMLFileName);
		}
		else if (ret > 0){
			printf("%s fails to validate\n", XMLFileName);
		}
		else{
			printf("%s validation generated an internal error\n", XMLFileName);
		}
		xmlSchemaFreeValidCtxt(ctxt);
		xmlFreeDoc(doc);
	}


	if(schema != NULL)
		xmlSchemaFree(schema);

	xmlSchemaCleanupTypes();
	xmlCleanupParser();
	xmlMemoryDump();

	return;
}
