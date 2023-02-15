uint8_t unicodetocodepoint(uint16_t c, bool decgraphics) {
  if (decgraphics) { // First map DEC special graphics to Unicode
    switch (c) {
      case 0x005f: c = 0x00a0; break;
      case 0x0060: c = 0x25c6; break;
      case 0x0061: c = 0x2592; break;
      case 0x0062: c = 0x2409; break;
      case 0x0063: c = 0x240c; break;
      case 0x0064: c = 0x240d; break;
      case 0x0065: c = 0x240a; break;
      case 0x0066: c = 0x00b0; break;
      case 0x0067: c = 0x00b1; break;
      case 0x0068: c = 0x2424; break;
      case 0x0069: c = 0x240b; break;
      case 0x006a: c = 0x2518; break;
      case 0x006b: c = 0x2510; break;
      case 0x006c: c = 0x250c; break;
      case 0x006d: c = 0x2514; break;
      case 0x006e: c = 0x253c; break;
      case 0x006f: c = 0x23ba; break;
      case 0x0070: c = 0x23bb; break;
      case 0x0071: c = 0x2500; break;
      case 0x0072: c = 0x23bc; break;
      case 0x0073: c = 0x23bd; break;
      case 0x0074: c = 0x251c; break;
      case 0x0075: c = 0x2524; break;
      case 0x0076: c = 0x2534; break;
      case 0x0077: c = 0x252c; break;
      case 0x0078: c = 0x2502; break;
      case 0x0079: c = 0x2264; break;
      case 0x007a: c = 0x2265; break;
      case 0x007b: c = 0x03c0; break;
      case 0x007c: c = 0x2260; break;
      case 0x007d: c = 0x00a3; break;
      case 0x007e: c = 0x00b7; break;
    }
  }
  switch (c) { // Map Unicode to VT2040-font code point
    case 0x25cb: return 0x00; // WHITE CIRCLE
    case 0x25a0: return 0x01; // BLACK SQUARE
    case 0x2191: return 0x02; // UPWARDS ARROW
    case 0x2193: return 0x03; // DOWNWARDS ARROW
    case 0x2192: return 0x04; // RIGHTWARDS ARROW
    case 0x2190: return 0x05; // LEFTWARDS ARROW
    case 0x2551: return 0x06; // BOX DRAWINGS DOUBLE VERTICAL
    case 0x2550: return 0x07; // BOX DRAWINGS DOUBLE HORIZONTAL
    case 0x2554: return 0x08; // BOX DRAWINGS DOUBLE DOWN AND RIGHT
    case 0x2557: return 0x09; // BOX DRAWINGS DOUBLE DOWN AND LEFT
    case 0x255a: return 0x0a; // BOX DRAWINGS DOUBLE UP AND RIGHT
    case 0x255d: return 0x0b; // BOX DRAWINGS DOUBLE UP AND LEFT
    case 0x2591: return 0x0c; // LIGHT SHADE
    case 0x2592: return 0x0d; // MEDIUM SHADE
    case 0x25ba: return 0x0e; // BLACK RIGHT-POINTING POINTER
    case 0x25c4: return 0x0f; // BLACK LEFT-POINTING POINTER
    case 0x2502: return 0x10; // BOX DRAWINGS LIGHT VERTICAL
    case 0x2500: return 0x11; // BOX DRAWINGS LIGHT HORIZONTAL
    case 0x250c: return 0x12; // BOX DRAWINGS LIGHT DOWN AND RIGHT
    case 0x2510: return 0x13; // BOX DRAWINGS LIGHT DOWN AND LEFT
    case 0x2514: return 0x14; // BOX DRAWINGS LIGHT UP AND RIGHT
    case 0x2518: return 0x15; // BOX DRAWINGS LIGHT UP AND LEFT
    case 0x251c: return 0x16; // BOX DRAWINGS LIGHT VERTICAL AND RIGHT
    case 0x2524: return 0x17; // BOX DRAWINGS LIGHT VERTICAL AND LEFT
    case 0x2534: return 0x18; // BOX DRAWINGS LIGHT UP AND HORIZONTAL
    case 0x252c: return 0x19; // BOX DRAWINGS LIGHT DOWN AND HORIZONTAL
    case 0x25c6: return 0x1a; // BLACK DIAMOND
    case 0x253C: return 0x1b; // BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL
    case 0x2588: return 0x1c; // FULL BLOCK
    case 0x2584: return 0x1d; // LOWER HALF BLOCK
    case 0x2580: return 0x1e; // UPPER HALF BLOCK
    case 0x25ac: return 0x1f; // BLACK RECTANGLE
    case 0x0020: return 0x20; // SPACE
    case 0x0021: return 0x21; // EXCLAMATION MARK
    case 0x0022: return 0x22; // QUOTATION MARK
    case 0x0023: return 0x23; // NUMBER SIGN
    case 0x0024: return 0x24; // DOLLAR SIGN
    case 0x0025: return 0x25; // PERCENT SIGN
    case 0x0026: return 0x26; // AMPERSAND
    case 0x0027: return 0x27; // APOSTROPHE
    case 0x0028: return 0x28; // LEFT PARENTHESIS
    case 0x0029: return 0x29; // RIGHT PARENTHESIS
    case 0x002A: return 0x2A; // ASTERISK
    case 0x002B: return 0x2B; // PLUS SIGN
    case 0x002C: return 0x2C; // COMMA
    case 0x002D: return 0x2D; // HYPHEN-MINUS
    case 0x002E: return 0x2E; // FULL STOP
    case 0x002F: return 0x2F; // SOLIDUS
    case 0x0030: return 0x30; // DIGIT ZERO
    case 0x0031: return 0x31; // DIGIT ONE
    case 0x0032: return 0x32; // DIGIT TWO
    case 0x0033: return 0x33; // DIGIT THREE
    case 0x0034: return 0x34; // DIGIT FOUR
    case 0x0035: return 0x35; // DIGIT FIVE
    case 0x0036: return 0x36; // DIGIT SIX
    case 0x0037: return 0x37; // DIGIT SEVEN
    case 0x0038: return 0x38; // DIGIT EIGHT
    case 0x0039: return 0x39; // DIGIT NINE
    case 0x003A: return 0x3A; // COLON
    case 0x003B: return 0x3B; // SEMICOLON
    case 0x003C: return 0x3C; // LESS-THAN SIGN
    case 0x003D: return 0x3D; // EQUALS SIGN
    case 0x003E: return 0x3E; // GREATER-THAN SIGN
    case 0x003F: return 0x3F; // QUESTION MARK
    case 0x0040: return 0x40; // COMMERCIAL AT
    case 0x0041: return 0x41; // LATIN CAPITAL LETTER A
    case 0x0042: return 0x42; // LATIN CAPITAL LETTER B
    case 0x0043: return 0x43; // LATIN CAPITAL LETTER C
    case 0x0044: return 0x44; // LATIN CAPITAL LETTER D
    case 0x0045: return 0x45; // LATIN CAPITAL LETTER E
    case 0x0046: return 0x46; // LATIN CAPITAL LETTER F
    case 0x0047: return 0x47; // LATIN CAPITAL LETTER G
    case 0x0048: return 0x48; // LATIN CAPITAL LETTER H
    case 0x0049: return 0x49; // LATIN CAPITAL LETTER I
    case 0x004A: return 0x4A; // LATIN CAPITAL LETTER J
    case 0x004B: return 0x4B; // LATIN CAPITAL LETTER K
    case 0x004C: return 0x4C; // LATIN CAPITAL LETTER L
    case 0x004D: return 0x4D; // LATIN CAPITAL LETTER M
    case 0x004E: return 0x4E; // LATIN CAPITAL LETTER N
    case 0x004F: return 0x4F; // LATIN CAPITAL LETTER O
    case 0x0050: return 0x50; // LATIN CAPITAL LETTER P
    case 0x0051: return 0x51; // LATIN CAPITAL LETTER Q
    case 0x0052: return 0x52; // LATIN CAPITAL LETTER R
    case 0x0053: return 0x53; // LATIN CAPITAL LETTER S
    case 0x0054: return 0x54; // LATIN CAPITAL LETTER T
    case 0x0055: return 0x55; // LATIN CAPITAL LETTER U
    case 0x0056: return 0x56; // LATIN CAPITAL LETTER V
    case 0x0057: return 0x57; // LATIN CAPITAL LETTER W
    case 0x0058: return 0x58; // LATIN CAPITAL LETTER X
    case 0x0059: return 0x59; // LATIN CAPITAL LETTER Y
    case 0x005A: return 0x5A; // LATIN CAPITAL LETTER Z
    case 0x005B: return 0x5B; // LEFT SQUARE BRACKET
    case 0x005C: return 0x5C; // REVERSE SOLIDUS
    case 0x005D: return 0x5D; // RIGHT SQUARE BRACKET
    case 0x005E: return 0x5E; // CIRCUMFLEX ACCENT
    case 0x005F: return 0x5F; // LOW LINE
    case 0x0060: return 0x60; // GRAVE ACCENT
    case 0x0061: return 0x61; // LATIN SMALL LETTER A
    case 0x0062: return 0x62; // LATIN SMALL LETTER B
    case 0x0063: return 0x63; // LATIN SMALL LETTER C
    case 0x0064: return 0x64; // LATIN SMALL LETTER D
    case 0x0065: return 0x65; // LATIN SMALL LETTER E
    case 0x0066: return 0x66; // LATIN SMALL LETTER F
    case 0x0067: return 0x67; // LATIN SMALL LETTER G
    case 0x0068: return 0x68; // LATIN SMALL LETTER H
    case 0x0069: return 0x69; // LATIN SMALL LETTER I
    case 0x006A: return 0x6A; // LATIN SMALL LETTER J
    case 0x006B: return 0x6B; // LATIN SMALL LETTER K
    case 0x006C: return 0x6C; // LATIN SMALL LETTER L
    case 0x006D: return 0x6D; // LATIN SMALL LETTER M
    case 0x006E: return 0x6E; // LATIN SMALL LETTER N
    case 0x006F: return 0x6F; // LATIN SMALL LETTER O
    case 0x0070: return 0x70; // LATIN SMALL LETTER P
    case 0x0071: return 0x71; // LATIN SMALL LETTER Q
    case 0x0072: return 0x72; // LATIN SMALL LETTER R
    case 0x0073: return 0x73; // LATIN SMALL LETTER S
    case 0x0074: return 0x74; // LATIN SMALL LETTER T
    case 0x0075: return 0x75; // LATIN SMALL LETTER U
    case 0x0076: return 0x76; // LATIN SMALL LETTER V
    case 0x0077: return 0x77; // LATIN SMALL LETTER W
    case 0x0078: return 0x78; // LATIN SMALL LETTER X
    case 0x0079: return 0x79; // LATIN SMALL LETTER Y
    case 0x007A: return 0x7A; // LATIN SMALL LETTER Z
    case 0x007B: return 0x7B; // LEFT CURLY BRACKET
    case 0x007C: return 0x7C; // VERTICAL LINE
    case 0x007D: return 0x7D; // RIGHT CURLY BRACKET
    case 0x007E: return 0x7E; // TILDE
    case 0x007F: return 0x7F; // DELETE
    case 0x20AC: return 0x80; // EURO SIGN
    case 0x03C0: return 0x81; // GREEK SMALL LETTER PI
    case 0x201A: return 0x82; // SINGLE LOW-9 QUOTATION MARK
    case 0x0192: return 0x83; // LATIN SMALL LETTER F WITH HOOK
    case 0x201E: return 0x84; // DOUBLE LOW-9 QUOTATION MARK
    case 0x2026: return 0x85; // HORIZONTAL ELLIPSIS
    case 0x2020: return 0x86; // DAGGER
    case 0x2021: return 0x87; // DOUBLE DAGGER
    case 0x02C6: return 0x88; // MODIFIER LETTER CIRCUMFLEX ACCENT
    case 0x2030: return 0x89; // PER MILLE SIGN
    case 0x0160: return 0x8A; // LATIN CAPITAL LETTER S WITH CARON
    case 0x2039: return 0x8B; // SINGLE LEFT-POINTING ANGLE QUOTATION MARK
    case 0x0152: return 0x8C; // LATIN CAPITAL LIGATURE OE
    case 0x2264: return 0x8D; // LESS-THAN OR EQUAL TO
    case 0x017D: return 0x8E; // LATIN CAPITAL LETTER Z WITH CARON
    case 0x2260: return 0x8F; // NOT EQUAL TO
    case 0x2018: return 0x91; // LEFT SINGLE QUOTATION MARK
    case 0x2019: return 0x92; // RIGHT SINGLE QUOTATION MARK
    case 0x201C: return 0x93; // LEFT DOUBLE QUOTATION MARK
    case 0x201D: return 0x94; // RIGHT DOUBLE QUOTATION MARK
    case 0x2022: return 0x95; // BULLET
    case 0x2013: return 0x96; // EN DASH
    case 0x2014: return 0x97; // EM DASH
    case 0x02DC: return 0x98; // SMALL TILDE
    case 0x2122: return 0x99; // TRADE MARK SIGN
    case 0x0161: return 0x9A; // LATIN SMALL LETTER S WITH CARON
    case 0x203A: return 0x9B; // SINGLE RIGHT-POINTING ANGLE QUOTATION MARK
    case 0x0153: return 0x9C; // LATIN SMALL LIGATURE OE
    case 0x2265: return 0x9D; // GREATER-THAN OR EQUAL TO
    case 0x017E: return 0x9E; // LATIN SMALL LETTER Z WITH CARON
    case 0x0178: return 0x9F; // LATIN CAPITAL LETTER Y WITH DIAERESIS
    case 0x00A0: return 0xA0; // NO-BREAK SPACE
    case 0x00A1: return 0xA1; // INVERTED EXCLAMATION MARK
    case 0x00A2: return 0xA2; // CENT SIGN
    case 0x00A3: return 0xA3; // POUND SIGN
    case 0x00A4: return 0xA4; // CURRENCY SIGN
    case 0x00A5: return 0xA5; // YEN SIGN
    case 0x00A6: return 0xA6; // BROKEN BAR
    case 0x00A7: return 0xA7; // SECTION SIGN
    case 0x00A8: return 0xA8; // DIAERESIS
    case 0x00A9: return 0xA9; // COPYRIGHT SIGN
    case 0x00AA: return 0xAA; // FEMININE ORDINAL INDICATOR
    case 0x00AB: return 0xAB; // LEFT-POINTING DOUBLE ANGLE QUOTATION MARK
    case 0x00AC: return 0xAC; // NOT SIGN
    case 0x00AD: return 0xAD; // SOFT HYPHEN
    case 0x00AE: return 0xAE; // REGISTERED SIGN
    case 0x00AF: return 0xAF; // MACRON
    case 0x00B0: return 0xB0; // DEGREE SIGN
    case 0x00B1: return 0xB1; // PLUS-MINUS SIGN
    case 0x00B2: return 0xB2; // SUPERSCRIPT TWO
    case 0x00B3: return 0xB3; // SUPERSCRIPT THREE
    case 0x00B4: return 0xB4; // ACUTE ACCENT
    case 0x00B5: return 0xB5; // MICRO SIGN
    case 0x00B6: return 0xB6; // PILCROW SIGN
    case 0x00B7: return 0xB7; // MIDDLE DOT
    case 0x00B8: return 0xB8; // CEDILLA
    case 0x00B9: return 0xB9; // SUPERSCRIPT ONE
    case 0x00BA: return 0xBA; // MASCULINE ORDINAL INDICATOR
    case 0x00BB: return 0xBB; // RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK
    case 0x00BC: return 0xBC; // VULGAR FRACTION ONE QUARTER
    case 0x00BD: return 0xBD; // VULGAR FRACTION ONE HALF
    case 0x00BE: return 0xBE; // VULGAR FRACTION THREE QUARTERS
    case 0x00BF: return 0xBF; // INVERTED QUESTION MARK
    case 0x00C0: return 0xC0; // LATIN CAPITAL LETTER A WITH GRAVE
    case 0x00C1: return 0xC1; // LATIN CAPITAL LETTER A WITH ACUTE
    case 0x00C2: return 0xC2; // LATIN CAPITAL LETTER A WITH CIRCUMFLEX
    case 0x00C3: return 0xC3; // LATIN CAPITAL LETTER A WITH TILDE
    case 0x00C4: return 0xC4; // LATIN CAPITAL LETTER A WITH DIAERESIS
    case 0x00C5: return 0xC5; // LATIN CAPITAL LETTER A WITH RING ABOVE
    case 0x00C6: return 0xC6; // LATIN CAPITAL LETTER AE
    case 0x00C7: return 0xC7; // LATIN CAPITAL LETTER C WITH CEDILLA
    case 0x00C8: return 0xC8; // LATIN CAPITAL LETTER E WITH GRAVE
    case 0x00C9: return 0xC9; // LATIN CAPITAL LETTER E WITH ACUTE
    case 0x00CA: return 0xCA; // LATIN CAPITAL LETTER E WITH CIRCUMFLEX
    case 0x00CB: return 0xCB; // LATIN CAPITAL LETTER E WITH DIAERESIS
    case 0x00CC: return 0xCC; // LATIN CAPITAL LETTER I WITH GRAVE
    case 0x00CD: return 0xCD; // LATIN CAPITAL LETTER I WITH ACUTE
    case 0x00CE: return 0xCE; // LATIN CAPITAL LETTER I WITH CIRCUMFLEX
    case 0x00CF: return 0xCF; // LATIN CAPITAL LETTER I WITH DIAERESIS
    case 0x00D0: return 0xD0; // LATIN CAPITAL LETTER ETH
    case 0x00D1: return 0xD1; // LATIN CAPITAL LETTER N WITH TILDE
    case 0x00D2: return 0xD2; // LATIN CAPITAL LETTER O WITH GRAVE
    case 0x00D3: return 0xD3; // LATIN CAPITAL LETTER O WITH ACUTE
    case 0x00D4: return 0xD4; // LATIN CAPITAL LETTER O WITH CIRCUMFLEX
    case 0x00D5: return 0xD5; // LATIN CAPITAL LETTER O WITH TILDE
    case 0x00D6: return 0xD6; // LATIN CAPITAL LETTER O WITH DIAERESIS
    case 0x00D7: return 0xD7; // MULTIPLICATION SIGN
    case 0x00D8: return 0xD8; // LATIN CAPITAL LETTER O WITH STROKE
    case 0x00D9: return 0xD9; // LATIN CAPITAL LETTER U WITH GRAVE
    case 0x00DA: return 0xDA; // LATIN CAPITAL LETTER U WITH ACUTE
    case 0x00DB: return 0xDB; // LATIN CAPITAL LETTER U WITH CIRCUMFLEX
    case 0x00DC: return 0xDC; // LATIN CAPITAL LETTER U WITH DIAERESIS
    case 0x00DD: return 0xDD; // LATIN CAPITAL LETTER Y WITH ACUTE
    case 0x00DE: return 0xDE; // LATIN CAPITAL LETTER THORN
    case 0x00DF: return 0xDF; // LATIN SMALL LETTER SHARP S
    case 0x00E0: return 0xE0; // LATIN SMALL LETTER A WITH GRAVE
    case 0x00E1: return 0xE1; // LATIN SMALL LETTER A WITH ACUTE
    case 0x00E2: return 0xE2; // LATIN SMALL LETTER A WITH CIRCUMFLEX
    case 0x00E3: return 0xE3; // LATIN SMALL LETTER A WITH TILDE
    case 0x00E4: return 0xE4; // LATIN SMALL LETTER A WITH DIAERESIS
    case 0x00E5: return 0xE5; // LATIN SMALL LETTER A WITH RING ABOVE
    case 0x00E6: return 0xE6; // LATIN SMALL LETTER AE
    case 0x00E7: return 0xE7; // LATIN SMALL LETTER C WITH CEDILLA
    case 0x00E8: return 0xE8; // LATIN SMALL LETTER E WITH GRAVE
    case 0x00E9: return 0xE9; // LATIN SMALL LETTER E WITH ACUTE
    case 0x00EA: return 0xEA; // LATIN SMALL LETTER E WITH CIRCUMFLEX
    case 0x00EB: return 0xEB; // LATIN SMALL LETTER E WITH DIAERESIS
    case 0x00EC: return 0xEC; // LATIN SMALL LETTER I WITH GRAVE
    case 0x00ED: return 0xED; // LATIN SMALL LETTER I WITH ACUTE
    case 0x00EE: return 0xEE; // LATIN SMALL LETTER I WITH CIRCUMFLEX
    case 0x00EF: return 0xEF; // LATIN SMALL LETTER I WITH DIAERESIS
    case 0x00F0: return 0xF0; // LATIN SMALL LETTER ETH
    case 0x00F1: return 0xF1; // LATIN SMALL LETTER N WITH TILDE
    case 0x00F2: return 0xF2; // LATIN SMALL LETTER O WITH GRAVE
    case 0x00F3: return 0xF3; // LATIN SMALL LETTER O WITH ACUTE
    case 0x00F4: return 0xF4; // LATIN SMALL LETTER O WITH CIRCUMFLEX
    case 0x00F5: return 0xF5; // LATIN SMALL LETTER O WITH TILDE
    case 0x00F6: return 0xF6; // LATIN SMALL LETTER O WITH DIAERESIS
    case 0x00F7: return 0xF7; // DIVISION SIGN
    case 0x00F8: return 0xF8; // LATIN SMALL LETTER O WITH STROKE
    case 0x00F9: return 0xF9; // LATIN SMALL LETTER U WITH GRAVE
    case 0x00FA: return 0xFA; // LATIN SMALL LETTER U WITH ACUTE
    case 0x00FB: return 0xFB; // LATIN SMALL LETTER U WITH CIRCUMFLEX
    case 0x00FC: return 0xFC; // LATIN SMALL LETTER U WITH DIAERESIS
    case 0x00FD: return 0xFD; // LATIN SMALL LETTER Y WITH ACUTE
    case 0x00FE: return 0xFE; // LATIN SMALL LETTER THORN
    case 0x00FF: return 0xFF; // LATIN SMALL LETTER Y WITH DIAERESIS
    default:     return 0xBF; // INVERTED QUESTION MARK
  }
}
