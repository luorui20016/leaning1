#ifndef __DIGITS5x9_H
#define __DIGITS5x9_H

#define dig5x9 &Digits5x9

static const Font_TypeDef Digits5x9 = {
		5,           // Font width
		9,           // Font height
		9,           // Bytes per character
		FONT_H,      // Vertical font scan lines
		45,          // First character: '-'
		57,          // Last character: '9'
		48,          // Unknown character: '0'
		{
				0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00, // '-'
				0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04, // '.'
				0x10,0x10,0x08,0x08,0x04,0x02,0x02,0x01,0x01, // '/'
				0x1F,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x1F, // '0'
				0x04,0x06,0x04,0x04,0x04,0x04,0x04,0x04,0x0E, // '1'
				0x1F,0x10,0x10,0x10,0x1F,0x01,0x01,0x01,0x1F, // '2'
				0x1F,0x10,0x10,0x10,0x1E,0x10,0x10,0x10,0x1F, // '3'
				0x11,0x11,0x11,0x11,0x1F,0x10,0x10,0x10,0x10, // '4'
				0x1F,0x01,0x01,0x01,0x1F,0x10,0x10,0x10,0x1F, // '5'
				0x1F,0x01,0x01,0x01,0x1F,0x11,0x11,0x11,0x1F, // '6'
				0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10, // '7'
				0x1F,0x11,0x11,0x11,0x1F,0x11,0x11,0x11,0x1F, // '8'
				0x1F,0x11,0x11,0x11,0x1F,0x10,0x10,0x10,0x1F  // '9'
		}
};

#endif // __DIGITS5x9_H
