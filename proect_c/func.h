#pragma once
#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/globals.h>
#include <stddef.h>
#include <libxml/tree.h>
#include <libxml/xmlschemastypes.h>
#include <libxml/xpath.h>
#include <libxml/xinclude.h>
#include <libxml/valid.h>
#include <libxml/xmlschemas.h>

int is_leaf(xmlNode * node);
void print_xml(xmlNode * node, int indent_len);
void validateXML(char *XMLFileName, char *XSDFileName);
void copy_xml(FILE *fp, xmlNode *node, int indent_len);
void copy_xml_diff(FILE *fp, xmlNode *node1, xmlNode *node2, int indent_len);