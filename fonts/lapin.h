/*
 * Font lapin
 */

#define LAPIN_HEIGHT 17

const uint8_t lapin_0x2a[] __attribute__((__progmem__)) = {   /* '*' width: 9 */
	  0x66,  	    	     /* [ ..  .. ] */
	  0x66,  	    	     /* [ ..  .. ] */
	  0x3c,  	    	     /* [  ....  ] */
	  0xff,  	    	     /* [........] */
	  0xff,  	    	     /* [........] */
	  0x3c,  	    	     /* [  ....  ] */
	  0x66,  	    	     /* [ ..  .. ] */
	  0x66,  	    	     /* [ ..  .. ] */
};

	  0xdb,  	    	     /* [.. .. ..] */
	  0xdb,  	    	     /* [.. .. ..] */
	  0x99,  	    	     /* [.  ..  .] */
	  0x99,  	    	     /* [.  ..  .] */
	  0x81,  	    	     /* [.      .] */
	  0x81,  	    	     /* [.      .] */
	  0x00,  	    	     /* [        ] */
	  0x00,  	    	     /* [        ] */
};

const uint8_t lapin_0x30[] __attribute__((__progmem__)) = {   /* '0' width: 9 */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
	  0x7f,  0xc0,  	    	     /* [ ......... ] */
	  0xd8,  0x60,  	    	     /* [.. ..    ..] */
	  0xcc,  0x60,  	    	     /* [..  ..   ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0x7f,  0xc0,  	    	     /* [ ......... ] */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
};

	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xb1,  0xa0,  	    	     /* [. ..   .. .] */
	  0xa0,  0xa0,  	    	     /* [. .     . .] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x31[] __attribute__((__progmem__)) = {   /* '1' width: 9 */
	  0xc0,  0x00,  	    	     /* [..         ] */
	  0xc0,  0xc0,  	    	     /* [..      .. ] */
	  0xc0,  0xc0,  	    	     /* [..      .. ] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xc0,  0x00,  	    	     /* [..         ] */
	  0xc0,  0x00,  	    	     /* [..         ] */
	  0xc0,  0x00,  	    	     /* [..         ] */
};

	  0x3f,  0xe0,  	    	     /* [  .........] */
	  0x3f,  0xe0,  	    	     /* [  .........] */
	  0x3f,  0xe0,  	    	     /* [  .........] */
	  0x3f,  0xe0,  	    	     /* [  .........] */
	  0x3f,  0x20,  	    	     /* [  ......  .] */
	  0x3f,  0x20,  	    	     /* [  ......  .] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x32[] __attribute__((__progmem__)) = {   /* '2' width: 9 */
	  0xc1,  0x80,  	    	     /* [..     ..  ] */
	  0xe1,  0xc0,  	    	     /* [...    ... ] */
	  0xf0,  0x60,  	    	     /* [....     ..] */
	  0xd8,  0x60,  	    	     /* [.. ..    ..] */
	  0xcc,  0x60,  	    	     /* [..  ..   ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc3,  0xc0,  	    	     /* [..    .... ] */
	  0xc1,  0x80,  	    	     /* [..     ..  ] */
};

	  0x3f,  0xe0,  	    	     /* [  .........] */
	  0x3f,  0xe0,  	    	     /* [  .........] */
	  0x3f,  0xa0,  	    	     /* [  ....... .] */
	  0x3f,  0xa0,  	    	     /* [  ....... .] */
	  0x3e,  0x00,  	    	     /* [  .....    ] */
	  0x3e,  0x00,  	    	     /* [  .....    ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x33[] __attribute__((__progmem__)) = {   /* '3' width: 9 */
	  0x31,  0x80,  	    	     /* [  ..   ..  ] */
	  0x71,  0xc0,  	    	     /* [ ...   ... ] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xce,  0x60,  	    	     /* [..  ...  ..] */
	  0x7b,  0xc0,  	    	     /* [ .... .... ] */
	  0x31,  0x80,  	    	     /* [  ..   ..  ] */
};

	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xbf,  0xa0,  	    	     /* [. ....... .] */
	  0xbf,  0xa0,  	    	     /* [. ....... .] */
	  0x0c,  0x00,  	    	     /* [    ..     ] */
	  0x08,  0x00,  	    	     /* [    .      ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x34[] __attribute__((__progmem__)) = {   /* '4' width: 9 */
	  0x1c,  0x00,  	    	     /* [   ...     ] */
	  0x1e,  0x00,  	    	     /* [   ....    ] */
	  0x1b,  0x00,  	    	     /* [   .. ..   ] */
	  0x19,  0x80,  	    	     /* [   ..  ..  ] */
	  0xd8,  0xc0,  	    	     /* [.. ..   .. ] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xd8,  0x00,  	    	     /* [.. ..      ] */
};

	  0xe7,  0xe0,  	    	     /* [...  ......] */
	  0xe7,  0xe0,  	    	     /* [...  ......] */
	  0xe7,  0xe0,  	    	     /* [...  ......] */
	  0xe7,  0xe0,  	    	     /* [...  ......] */
	  0x20,  0x60,  	    	     /* [  .      ..] */
	  0x20,  0x20,  	    	     /* [  .       .] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x35[] __attribute__((__progmem__)) = {   /* '5' width: 9 */
	  0x23,  0xe0,  	    	     /* [  .   .....] */
	  0x63,  0xe0,  	    	     /* [ ..   .....] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0x7e,  0x60,  	    	     /* [ ......  ..] */
	  0x3c,  0x60,  	    	     /* [  ....   ..] */
};

	  0xff,  0x80,  	    	     /* [.........  ] */
	  0xfd,  0x80,  	    	     /* [...... ..  ] */
	  0xbc,  0x80,  	    	     /* [. ....  .  ] */
	  0xbc,  0x80,  	    	     /* [. ....  .  ] */
	  0x1c,  0x80,  	    	     /* [   ...  .  ] */
	  0x1c,  0x80,  	    	     /* [   ...  .  ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x36[] __attribute__((__progmem__)) = {   /* '6' width: 9 */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
	  0x7f,  0xc0,  	    	     /* [ ......... ] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0xc3,  0x60,  	    	     /* [..    .. ..] */
	  0x7e,  0x60,  	    	     /* [ ......  ..] */
	  0x3c,  0x00,  	    	     /* [  ....     ] */
};

	  0xff,  0xe0,  	    	     /* [...........] */
	  0xfd,  0xe0,  	    	     /* [...... ....] */
	  0xbc,  0xa0,  	    	     /* [. ....  . .] */
	  0xbc,  0x80,  	    	     /* [. ....  .  ] */
	  0x00,  0x80,  	    	     /* [        .  ] */
	  0x00,  0x80,  	    	     /* [        .  ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x37[] __attribute__((__progmem__)) = {   /* '7' width: 9 */
	  0x00,  0x60,  	    	     /* [         ..] */
	  0x00,  0x60,  	    	     /* [         ..] */
	  0x00,  0x60,  	    	     /* [         ..] */
	  0xf8,  0x60,  	    	     /* [.....    ..] */
	  0xfc,  0x60,  	    	     /* [......   ..] */
	  0x06,  0x60,  	    	     /* [     ..  ..] */
	  0x03,  0xe0,  	    	     /* [      .....] */
	  0x01,  0xe0,  	    	     /* [       ....] */
};

	  0xff,  0x80,  	    	     /* [.........  ] */
	  0xff,  0x80,  	    	     /* [.........  ] */
	  0xff,  0x80,  	    	     /* [.........  ] */
	  0xff,  0x80,  	    	     /* [.........  ] */
	  0xff,  0x80,  	    	     /* [.........  ] */
	  0xff,  0x80,  	    	     /* [.........  ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x38[] __attribute__((__progmem__)) = {   /* '8' width: 9 */
	  0x31,  0x80,  	    	     /* [  ..   ..  ] */
	  0x7b,  0xc0,  	    	     /* [ .... .... ] */
	  0xce,  0x60,  	    	     /* [..  ...  ..] */
	  0xce,  0x60,  	    	     /* [..  ...  ..] */
	  0xce,  0x60,  	    	     /* [..  ...  ..] */
	  0xce,  0x60,  	    	     /* [..  ...  ..] */
	  0x7b,  0xc0,  	    	     /* [ .... .... ] */
	  0x31,  0x80,  	    	     /* [  ..   ..  ] */
};

	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xb5,  0xa0,  	    	     /* [. .. . .. .] */
	  0xb5,  0xa0,  	    	     /* [. .. . .. .] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x39[] __attribute__((__progmem__)) = {   /* '9' width: 9 */
	  0x07,  0x80,  	    	     /* [     ....  ] */
	  0xcf,  0xc0,  	    	     /* [..  ...... ] */
	  0xd8,  0x60,  	    	     /* [.. ..    ..] */
	  0xd8,  0x60,  	    	     /* [.. ..    ..] */
	  0xd8,  0x60,  	    	     /* [.. ..    ..] */
	  0xd8,  0x60,  	    	     /* [.. ..    ..] */
	  0x7f,  0xc0,  	    	     /* [ ......... ] */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
};

	  0xff,  0xe0,  	    	     /* [...........] */
	  0xf7,  0xe0,  	    	     /* [.... ......] */
	  0xa7,  0xa0,  	    	     /* [. .  .... .] */
	  0x27,  0xa0,  	    	     /* [  .  .... .] */
	  0x20,  0x00,  	    	     /* [  .        ] */
	  0x20,  0x00,  	    	     /* [  .        ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x41[] __attribute__((__progmem__)) = {   /* 'A' width: 9 */
	  0xfc,  0x00,  	    	     /* [......     ] */
	  0xff,  0x00,  	    	     /* [........   ] */
	  0x1b,  0xc0,  	    	     /* [   .. .... ] */
	  0x18,  0xe0,  	    	     /* [   ..   ...] */
	  0x18,  0xe0,  	    	     /* [   ..   ...] */
	  0x1b,  0xc0,  	    	     /* [   .. .... ] */
	  0xff,  0x00,  	    	     /* [........   ] */
	  0xfc,  0x00,  	    	     /* [......     ] */
};

	  0xe7,  0xe0,  	    	     /* [...  ......] */
	  0xe7,  0xe0,  	    	     /* [...  ......] */
	  0xe7,  0xe0,  	    	     /* [...  ......] */
	  0xe7,  0xe0,  	    	     /* [...  ......] */
	  0x00,  0x20,  	    	     /* [          .] */
	  0x00,  0x20,  	    	     /* [          .] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x42[] __attribute__((__progmem__)) = {   /* 'B' width: 9 */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xce,  0x60,  	    	     /* [..  ...  ..] */
	  0x7b,  0xc0,  	    	     /* [ .... .... ] */
	  0x31,  0x80,  	    	     /* [  ..   ..  ] */
};

	  0xff,  0xe0,  	    	     /* [...........] */
	  0xbd,  0xa0,  	    	     /* [. .... .. .] */
	  0x39,  0x80,  	    	     /* [  ...  ..  ] */
	  0x39,  0x80,  	    	     /* [  ...  ..  ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x43[] __attribute__((__progmem__)) = {   /* 'C' width: 9 */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
	  0x7f,  0xc0,  	    	     /* [ ......... ] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0x71,  0xc0,  	    	     /* [ ...   ... ] */
	  0x31,  0x80,  	    	     /* [  ..   ..  ] */
};

	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xbf,  0xa0,  	    	     /* [. ....... .] */
	  0xbf,  0xa0,  	    	     /* [. ....... .] */
	  0x0e,  0x00,  	    	     /* [    ...    ] */
	  0x0e,  0x00,  	    	     /* [    ...    ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x44[] __attribute__((__progmem__)) = {   /* 'D' width: 9 */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0x7f,  0xc0,  	    	     /* [ ......... ] */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
};

	  0xff,  0xe0,  	    	     /* [...........] */
	  0xbf,  0xa0,  	    	     /* [. ....... .] */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x45[] __attribute__((__progmem__)) = {   /* 'E' width: 9 */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc6,  0x60,  	    	     /* [..   ..  ..] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
	  0xc0,  0x60,  	    	     /* [..       ..] */
};

	  0x3f,  0x80,  	    	     /* [  .......  ] */
	  0x3f,  0x80,  	    	     /* [  .......  ] */
	  0x39,  0x80,  	    	     /* [  ...  ..  ] */
	  0x39,  0x80,  	    	     /* [  ...  ..  ] */
	  0x39,  0x80,  	    	     /* [  ...  ..  ] */
	  0x39,  0x80,  	    	     /* [  ...  ..  ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};

const uint8_t lapin_0x46[] __attribute__((__progmem__)) = {   /* 'F' width: 9 */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0xff,  0xe0,  	    	     /* [...........] */
	  0x06,  0x60,  	    	     /* [     ..  ..] */
	  0x06,  0x60,  	    	     /* [     ..  ..] */
	  0x06,  0x60,  	    	     /* [     ..  ..] */
	  0x06,  0x60,  	    	     /* [     ..  ..] */
	  0x00,  0x60,  	    	     /* [         ..] */
	  0x00,  0x60,  	    	     /* [         ..] */
};

	  0xff,  0x80,  	    	     /* [.........  ] */
	  0xff,  0x80,  	    	     /* [.........  ] */
	  0xf9,  0x80,  	    	     /* [.....  ..  ] */
	  0xf9,  0x80,  	    	     /* [.....  ..  ] */
	  0xf9,  0x80,  	    	     /* [.....  ..  ] */
	  0xf9,  0x80,  	    	     /* [.....  ..  ] */
	  0x00,  0x00,  	    	     /* [           ] */
	  0x00,  0x00,  	    	     /* [           ] */
};


/* Mapping from ASCII codes to font characters, from space (0x20) to del (0x7f) */
const uint8_t lapin_asciimap[223] __attribute__((__progmem__)) = {  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,    0,  255,  255,  255,  255,  255,  
	      1,    2,    3,    4,    5,    6,    7,    8,    9,   10,  255,  255,  255,  255,  255,  255,  
	    255,   11,   12,   13,   14,   15,   16,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  
	    255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  255,  };

const glyph_t lapin[] __attribute__((__progmem__)) = {
	   {  9,  8,  8,  0,  4, lapin_0x2a }, /* '*' */
	   {  9,  8, 11,  0,  4, lapin_0x30 }, /* '0' */
	   {  9,  8, 11,  0,  4, lapin_0x31 }, /* '1' */
	   {  9,  8, 11,  0,  4, lapin_0x32 }, /* '2' */
	   {  9,  8, 11,  0,  4, lapin_0x33 }, /* '3' */
	   {  9,  8, 11,  0,  4, lapin_0x34 }, /* '4' */
	   {  9,  8, 11,  0,  4, lapin_0x35 }, /* '5' */
	   {  9,  8, 11,  0,  4, lapin_0x36 }, /* '6' */
	   {  9,  8, 11,  0,  4, lapin_0x37 }, /* '7' */
	   {  9,  8, 11,  0,  4, lapin_0x38 }, /* '8' */
	   {  9,  8, 11,  0,  4, lapin_0x39 }, /* '9' */
	   {  9,  8, 11,  0,  4, lapin_0x41 }, /* 'A' */
	   {  9,  8, 11,  0,  4, lapin_0x42 }, /* 'B' */
	   {  9,  8, 11,  0,  4, lapin_0x43 }, /* 'C' */
	   {  9,  8, 11,  0,  4, lapin_0x44 }, /* 'D' */
	   {  9,  8, 11,  0,  4, lapin_0x45 }, /* 'E' */
	   {  9,  8, 11,  0,  4, lapin_0x46 }, /* 'F' */
};

