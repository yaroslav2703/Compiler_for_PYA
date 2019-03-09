#pragma once
#include "FST.h"

#define GRAPH_INT_LITERAL 3, \
	 FST::NODE(10, FST::RELATION(L'0', 1), FST::RELATION(L'1', 1), \
	            FST::RELATION(L'3', 1), FST::RELATION(L'2', 1), \
              	FST::RELATION(L'5', 1), FST::RELATION(L'4', 1), \
            	FST::RELATION(L'7', 1), FST::RELATION(L'6', 1), \
            	FST::RELATION(L'8', 1), FST::RELATION(L'9', 1)),\
	 FST::NODE(10, FST::RELATION(L'0', 1), FST::RELATION(L'1', 1), \
	            FST::RELATION(L'3', 1), FST::RELATION(L'2', 1), \
              	FST::RELATION(L'5', 1), FST::RELATION(L'4', 1), \
            	FST::RELATION(L'7', 1), FST::RELATION(L'6', 1), \
            	FST::RELATION(L'8', 1), FST::RELATION(L'9', 1)),\
     FST::NODE(10, FST::RELATION(L'0', 1), FST::RELATION(L'1', 1), \
	            FST::RELATION(L'3', 1), FST::RELATION(L'2', 1), \
              	FST::RELATION(L'5', 1), FST::RELATION(L'4', 1), \
            	FST::RELATION(L'7', 1), FST::RELATION(L'6', 1), \
            	FST::RELATION(L'8', 1), FST::RELATION(L'9', 1))

#define GRAPH_STRING_LITERAL 3, \
	FST::NODE(1,FST::RELATION(L'"',1)), \
FST::NODE(63,FST::RELATION(L'a',1),FST::RELATION(L'b',1), \
				FST::RELATION(L'c', 1), FST::RELATION(L'd', 1), \
				FST::RELATION(L'e', 1), FST::RELATION(L'f', 1), \
				FST::RELATION(L'g', 1), FST::RELATION(L'h', 1), \
				FST::RELATION(L'i', 1), FST::RELATION(L'j', 1), \
				FST::RELATION(L'k', 1), FST::RELATION(L'l', 1), \
				FST::RELATION(L'm', 1), FST::RELATION(L'n', 1), \
				FST::RELATION(L'o', 1), FST::RELATION(L'p', 1), \
				FST::RELATION(L'q', 1), FST::RELATION(L'r', 1), \
				FST::RELATION(L's', 1), FST::RELATION(L't', 1), \
				FST::RELATION(L'u', 1), FST::RELATION(L'v', 1), \
				FST::RELATION(L'w', 1), FST::RELATION(L'x', 1), \
				FST::RELATION(L'y', 1), FST::RELATION(L'z', 1), \
				FST::RELATION(L'0', 1), FST::RELATION(L'1',1), \
				FST::RELATION(L'3', 1), FST::RELATION(L'2',1), \
				FST::RELATION(L'5', 1), FST::RELATION(L'4',1), \
				FST::RELATION(L'7', 1), FST::RELATION(L'6',1), \
				FST::RELATION(L'9', 1), FST::RELATION(L'8',1), \
				FST::RELATION(L'A', 1),   FST::RELATION(L'B', 1), \
				 FST::RELATION(L'C', 1),  FST::RELATION(L'D', 1), \
				 FST::RELATION(L'E', 1),  FST::RELATION(L'F', 1), \
				 FST::RELATION(L'G', 1),  FST::RELATION(L'H', 1), \
				 FST::RELATION(L'I', 1),  FST::RELATION(L'J', 1), \
				 FST::RELATION(L'K', 1),  FST::RELATION(L'L', 1), \
				 FST::RELATION(L'M', 1),  FST::RELATION(L'N', 1), \
				 FST::RELATION(L'O', 1),  FST::RELATION(L'P', 1), \
				 FST::RELATION(L'Q', 1),  FST::RELATION(L'R', 1), \
				 FST::RELATION(L'S', 1),  FST::RELATION(L'T', 1), \
				 FST::RELATION(L'U', 1),  FST::RELATION(L'V', 1), \
				 FST::RELATION(L'W', 1),  FST::RELATION(L'X', 1), \
				 FST::RELATION(L'Y', 1),  FST::RELATION(L'Z', 1), \
				 FST::RELATION(L' ',1)), \
    FST::NODE(1,FST::RELATION(L'"',1))

#define GRAPH_ID 3, \
	FST::NODE(52, FST::RELATION(L'a',1),  FST::RELATION(L'b',1), \
				 FST::RELATION(L'c', 1),  FST::RELATION(L'd', 1), \
				 FST::RELATION(L'e', 1),  FST::RELATION(L'f', 1), \
				 FST::RELATION(L'g', 1),  FST::RELATION(L'h', 1), \
				 FST::RELATION(L'i', 1),  FST::RELATION(L'j', 1), \
				 FST::RELATION(L'k', 1),  FST::RELATION(L'l', 1), \
				 FST::RELATION(L'm', 1),  FST::RELATION(L'n', 1), \
				 FST::RELATION(L'o', 1),  FST::RELATION(L'p', 1), \
				 FST::RELATION(L'q', 1),  FST::RELATION(L'r', 1), \
				 FST::RELATION(L's', 1),  FST::RELATION(L't', 1), \
				 FST::RELATION(L'u', 1),  FST::RELATION(L'v', 1), \
				 FST::RELATION(L'w', 1),  FST::RELATION(L'x', 1), \
				 FST::RELATION(L'y', 1),  FST::RELATION(L'z', 1), \
				 FST::RELATION(L'A', 1),  FST::RELATION(L'B', 1), \
				 FST::RELATION(L'C', 1),  FST::RELATION(L'D', 1), \
				 FST::RELATION(L'E', 1),  FST::RELATION(L'F', 1), \
				 FST::RELATION(L'G', 1),  FST::RELATION(L'H', 1), \
				 FST::RELATION(L'I', 1),  FST::RELATION(L'J', 1), \
				 FST::RELATION(L'K', 1),  FST::RELATION(L'L', 1), \
				 FST::RELATION(L'M', 1),  FST::RELATION(L'N', 1), \
				 FST::RELATION(L'O', 1),  FST::RELATION(L'P', 1), \
				 FST::RELATION(L'Q', 1),  FST::RELATION(L'R', 1), \
				 FST::RELATION(L'S', 1),  FST::RELATION(L'T', 1), \
				 FST::RELATION(L'U', 1),  FST::RELATION(L'V', 1), \
				 FST::RELATION(L'W', 1),  FST::RELATION(L'X', 1), \
				 FST::RELATION(L'Y', 1),  FST::RELATION(L'Z', 1)), \
	FST::NODE(52, FST::RELATION(L'a',1),  FST::RELATION(L'b',1), \
				 FST::RELATION(L'c', 1),  FST::RELATION(L'd', 1), \
				 FST::RELATION(L'e', 1),  FST::RELATION(L'f', 1), \
				 FST::RELATION(L'g', 1),  FST::RELATION(L'h', 1), \
				 FST::RELATION(L'i', 1),  FST::RELATION(L'j', 1), \
				 FST::RELATION(L'k', 1),  FST::RELATION(L'l', 1), \
				 FST::RELATION(L'm', 1),  FST::RELATION(L'n', 1), \
				 FST::RELATION(L'o', 1),  FST::RELATION(L'p', 1), \
				 FST::RELATION(L'q', 1),  FST::RELATION(L'r', 1), \
				 FST::RELATION(L's', 1),  FST::RELATION(L't', 1), \
				 FST::RELATION(L'u', 1),  FST::RELATION(L'v', 1), \
				 FST::RELATION(L'w', 1),  FST::RELATION(L'x', 1), \
				 FST::RELATION(L'y', 1),  FST::RELATION(L'z', 1), \
				 FST::RELATION(L'A', 1),  FST::RELATION(L'B', 1), \
				 FST::RELATION(L'C', 1),  FST::RELATION(L'D', 1), \
				 FST::RELATION(L'E', 1),  FST::RELATION(L'F', 1), \
				 FST::RELATION(L'G', 1),  FST::RELATION(L'H', 1), \
				 FST::RELATION(L'I', 1),  FST::RELATION(L'J', 1), \
				 FST::RELATION(L'K', 1),  FST::RELATION(L'L', 1), \
				 FST::RELATION(L'M', 1),  FST::RELATION(L'N', 1), \
				 FST::RELATION(L'O', 1),  FST::RELATION(L'P', 1), \
				 FST::RELATION(L'Q', 1),  FST::RELATION(L'R', 1), \
				 FST::RELATION(L'S', 1),  FST::RELATION(L'T', 1), \
				 FST::RELATION(L'U', 1),  FST::RELATION(L'V', 1), \
				 FST::RELATION(L'W', 1),  FST::RELATION(L'X', 1), \
				 FST::RELATION(L'Y', 1),  FST::RELATION(L'Z', 1)), \
    FST::NODE(52, FST::RELATION(L'a',1),  FST::RELATION(L'b',1), \
				 FST::RELATION(L'c', 1),  FST::RELATION(L'd', 1), \
				 FST::RELATION(L'e', 1),  FST::RELATION(L'f', 1), \
				 FST::RELATION(L'g', 1),  FST::RELATION(L'h', 1), \
				 FST::RELATION(L'i', 1),  FST::RELATION(L'j', 1), \
				 FST::RELATION(L'k', 1),  FST::RELATION(L'l', 1), \
				 FST::RELATION(L'm', 1),  FST::RELATION(L'n', 1), \
				 FST::RELATION(L'o', 1),  FST::RELATION(L'p', 1), \
				 FST::RELATION(L'q', 1),  FST::RELATION(L'r', 1), \
				 FST::RELATION(L's', 1),  FST::RELATION(L't', 1), \
				 FST::RELATION(L'u', 1),  FST::RELATION(L'v', 1), \
				 FST::RELATION(L'w', 1),  FST::RELATION(L'x', 1), \
				 FST::RELATION(L'y', 1),  FST::RELATION(L'z', 1), \
				 FST::RELATION(L'A', 1),  FST::RELATION(L'B', 1), \
				 FST::RELATION(L'C', 1),  FST::RELATION(L'D', 1), \
				 FST::RELATION(L'E', 1),  FST::RELATION(L'F', 1), \
				 FST::RELATION(L'G', 1),  FST::RELATION(L'H', 1), \
				 FST::RELATION(L'I', 1),  FST::RELATION(L'J', 1), \
				 FST::RELATION(L'K', 1),  FST::RELATION(L'L', 1), \
				 FST::RELATION(L'M', 1),  FST::RELATION(L'N', 1), \
				 FST::RELATION(L'O', 1),  FST::RELATION(L'P', 1), \
				 FST::RELATION(L'Q', 1),  FST::RELATION(L'R', 1), \
				 FST::RELATION(L'S', 1),  FST::RELATION(L'T', 1), \
				 FST::RELATION(L'U', 1),  FST::RELATION(L'V', 1), \
				 FST::RELATION(L'W', 1),  FST::RELATION(L'X', 1), \
				 FST::RELATION(L'Y', 1),  FST::RELATION(L'Z', 1))