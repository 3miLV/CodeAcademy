#include "func.h"
/*gcc `xml2-config --cflags --libs` test.c*/


int main(int argc, char *argv[]){

    if (argc <= 3) {
		  printf("Usage: %s <XML Document 1> <XML Document 2> <XSD Document Name>\n", argv[0]);
		  return 1;
	  }

    FILE *fp = NULL;
    fp = fopen("xml-diff", "wb");

    char *xmlDoc1 = NULL;
    char *xmlDoc2 = NULL;
    char *xsdDoc = NULL;
    xmlDoc1 = argv[1];
    xmlDoc2 = argv[2];
    xsdDoc = argv[3];

    xmlDoc *doc1 = NULL;
    xmlDoc *doc2 = NULL;
    xmlNode *root_elementD1 = NULL;
    xmlNode *root_elementD2 = NULL;
   
    doc1 = xmlReadFile("xmlfile1.xml", NULL, 0);
    doc2 = xmlReadFile("xmlfile2.xml", NULL, 0);

    if ((doc1 == NULL) && (doc2 == NULL)) {
      printf("Could not parse the XML file");
    }

    root_elementD1 = xmlDocGetRootElement(doc1);
    root_elementD2 = xmlDocGetRootElement(doc2);

    validateXML(xmlDoc1, xsdDoc);
    validateXML(xmlDoc2, xsdDoc);

    copy_xml_diff(fp, root_elementD1, root_elementD2, 1);
    fprintf(fp, "\n");
    copy_xml_diff(fp, root_elementD2, root_elementD1, 1);
    //copy_xml(fp, root_elementD1, 1);
    //fprintf(fp, "\n");
    //copy_xml(fp, root_elementD2, 1);
    //print_xml(root_elementD1, 1);
    //printf("\n");
    //print_xml(root_elementD2, 1);


    xmlFreeDoc(doc1);
    xmlFreeDoc(doc2);

    xmlCleanupParser();
    fclose(fp);
}
