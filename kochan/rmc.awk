# rmc.awk - remove comments
# /*
#  * delete these initial comments, not part of lines of code 
#  */ 
#    similarly do not consider empty lines
# #include <stdio.h> similarly do not consider include standard headers
# #include "level.h" but allow user include headers
#
/^\/\*/ 		{ comment_inside = 1; stop_printing = 1; }
/^[ ]*\*\/[ 	]*$/ 	{ comment_inside = 0; stop_printing = 1; }
/^#include[ 	]*</	{ stop_printing = 1; }
/./			{ if (!comment_inside) {
				if (stop_printing) {
					stop_printing = 0
				} else {
					print $0
				}
			  }
			}
