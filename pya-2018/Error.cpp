#include "pch.h"


namespace Error {

	ERROR errors[ERROR_MAX_ENTRY] = {
		ERROR_ENTRY(0,L"Invalid error code"),
		ERROR_ENTRY(1, L"System failure"),
		ERROR_ENTRY_NODEF(2), ERROR_ENTRY_NODEF(3), ERROR_ENTRY_NODEF(4), ERROR_ENTRY_NODEF(5),
		ERROR_ENTRY_NODEF(6), ERROR_ENTRY_NODEF(7), ERROR_ENTRY_NODEF(8), ERROR_ENTRY_NODEF(9),
		ERROR_ENTRY_NODEF10(10), ERROR_ENTRY_NODEF10(20), ERROR_ENTRY_NODEF10(30), ERROR_ENTRY_NODEF10(40), ERROR_ENTRY_NODEF10(50),
		ERROR_ENTRY_NODEF10(60), ERROR_ENTRY_NODEF10(70), ERROR_ENTRY_NODEF10(80), ERROR_ENTRY_NODEF10(90),
		ERROR_ENTRY(100, L" parameter -in: must be specified"),
		ERROR_ENTRY(101, L" parameter -log: must be specified"),
		ERROR_ENTRY(102, L" parameter -out: must be specified"),
		ERROR_ENTRY_NODEF(103),
		ERROR_ENTRY(104, L"Input parameter length exceeded"),
		ERROR_ENTRY(105, L"incorrectly specified parameter name -in:"),
		ERROR_ENTRY(106, L"incorrectly specified parameter name -log:"),
		ERROR_ENTRY(107, L"incorrectly specified parameter name -out:"),
		ERROR_ENTRY(108, L"Type mismatch in operation"),
		ERROR_ENTRY(109, L"No token defined for characters"),
		ERROR_ENTRY(110, L"Error opening file"),
		ERROR_ENTRY(111, L"Invalid symbol in source file (-in)"),
		ERROR_ENTRY(112, L"Code should be located only inside functions"), //синтаксис
		ERROR_ENTRY(113, L"Wrong function defined"),
		ERROR_ENTRY(114, L"Function arguments are incorrectly defined"),
		ERROR_ENTRY(115, L"Wrong end of function"),
		ERROR_ENTRY(116, L"Variable declared incorrectly"),
		ERROR_ENTRY(117, L"The token table size has been exceeded"),
		ERROR_ENTRY(118, L"Main function declared incorrectly"),
		ERROR_ENTRY(119, L"End of main function declared incorrect"),
		ERROR_ENTRY(120, L"Error in operations on variables"),
		ERROR_ENTRY(121, L"Invalid function call definition"),
		ERROR_ENTRY(122, L"Wrong arguments in the function call"),
		ERROR_ENTRY(123, L"Construction not found"),
		ERROR_ENTRY(124, L"Invalid identifier when calling a function"), // семантика
		ERROR_ENTRY(125, L"Invalid number of arguments when calling a function"),
		ERROR_ENTRY(126, L"Invalid argument id in function call"),
		ERROR_ENTRY(127, L"Invalid argument type in function call"),
		ERROR_ENTRY(128, L"Wrong identifier when exiting a function"),
		ERROR_ENTRY(129, L"Wrong type of return value"),
		ERROR_ENTRY(130, L"Extra return function construction"),
		ERROR_ENTRY(131, L"Function not closed"),
		ERROR_ENTRY(132, L"More than one main function"),
		ERROR_ENTRY(133, L"No definition found for main function"),
		ERROR_ENTRY(134, L"Variable cannot be defined by an existing name"),
		ERROR_ENTRY(135, L"Function cannot be defined by an existing name"),
		ERROR_ENTRY(136, L"Parameter cannot be defined by already existing name"),
		ERROR_ENTRY(137, L"Error while trying to define the main function. The superior function is not closed"),
		ERROR_ENTRY(138, L"Variables can only be declared in functions"),
		ERROR_ENTRY(139, L"Functions can only be assigned to variables"),
		ERROR_ENTRY(140, L"The type of the function and the variable must match"),
		ERROR_ENTRY(141, L"Show can only be assigned to variables"),
		ERROR_ENTRY(142, L"Invalid Show definition,"),
		ERROR_ENTRY(143, L"Invalid argument id in Show"),
		ERROR_ENTRY(144, L"Wrong arguments in the Show"),
		ERROR_ENTRY(145, L"Invalid argument id in operation"),
		ERROR_ENTRY(146, L"An attempt to use a variable in the operation without defining"),
		ERROR_ENTRY(147, L"An attempt to use a variable in the existing name without defining"),
		ERROR_ENTRY(148, L"Using a variable without defining as an argument when calling a function"),
		ERROR_ENTRY(149, L"Using a variable without definition in the output"),
		ERROR_ENTRY(150, L"Wrong type of argument to standard function "),
		ERROR_ENTRY(151, L"Incorrect standard function call"),
		ERROR_ENTRY(152, L""),
		ERROR_ENTRY(153, L""),
		ERROR_ENTRY(154, L""),
		ERROR_ENTRY(155, L""),
		ERROR_ENTRY(156, L""),
		ERROR_ENTRY(157, L""),
		ERROR_ENTRY(158, L""),
		ERROR_ENTRY(159, L""),
		ERROR_ENTRY_NODEF10(160), ERROR_ENTRY_NODEF10(170), ERROR_ENTRY_NODEF10(180),
		ERROR_ENTRY(190, L"Error declaring a string literal"),
		ERROR_ENTRY(191, L"Error declaring integer literal"),
		ERROR_ENTRY(192, L"Error declaring floating point literal"),
		ERROR_ENTRY(193, L"ID name size limit exceeded"),
		ERROR_ENTRY_NODEF(194),ERROR_ENTRY_NODEF(195),
		ERROR_ENTRY_NODEF(196),ERROR_ENTRY_NODEF(197),ERROR_ENTRY_NODEF(198),ERROR_ENTRY_NODEF(199),
		ERROR_ENTRY_NODEF100(200), ERROR_ENTRY_NODEF100(300), ERROR_ENTRY_NODEF100(400), ERROR_ENTRY_NODEF100(500),
		ERROR_ENTRY_NODEF100(600),ERROR_ENTRY_NODEF100(700), ERROR_ENTRY_NODEF100(800)
	};



	ERROR geterror(int id)
	{
		if (id < 0 || id >= ERROR_MAX_ENTRY) {
			throw ERROR_THROW(0);
		}
		return errors[id];
	};

	ERROR geterrorin(int id, int line=-1 , int col=-1 )
	{
		
		ERROR a = geterror(id);
		a.inext.line = line;
		a.inext.col = col;
		
		return a;
	};

}