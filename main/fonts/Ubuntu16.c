#ifndef AMALGAMATED_BUILD
// This comes with no warranty, implied or otherwise

// This data structure was designed to support Proportional fonts
// on Arduinos. It can however handle any ttf font that has been converted
// using the conversion program. These could be fixed width or proportional
// fonts. Individual characters do not have to be multiples of 8 bits wide.
// Any width is fine and does not need to be fixed.

// The data bits are packed to minimize data requirements, but the tradeoff
// is that a header is required per character.

// Ubuntu16.c
// Point Size   : 16
// Memory usage : 1433 bytes
// # characters : 95

// Header Format (to make Arduino UTFT Compatible):
// ------------------------------------------------
// Character Width (Used as a marker to indicate use this format. i.e.: = 0x00)
// Character Height
// First Character (Reserved. 0x00)
// Number Of Characters (Reserved. 0x00)

const unsigned char tft_Ubuntu16[] = { 0x00, 0x10, 0x00, 0x00,

    // Individual Character Format:
    // ----------------------------
    // Character Code
    // Adjusted Y Offset
    // Width
    // Height
    // xOffset
    // xDelta (the distance to move the cursor. Effective width of the character.)
    // Data[n]

    // NOTE: You can remove any of these characters if they are not needed in
    // your application. The first character number in each Glyph indicates
    // the ASCII character code. Therefore, these do not have to be sequential.
    // Just remove all the content for a particular character to save space.

    // ' '
    0x20, 0x0D, 0x00, 0x00, 0x00, 0x04,

    // '!'
    0x21, 0x02, 0x01, 0x0B, 0x01, 0x04, 0xFC, 0x60,
    // '"'
    0x22, 0x00, 0x04, 0x04, 0x01, 0x07, 0x99, 0x99,
    // '#'
    0x23, 0x02, 0x09, 0x0B, 0x01, 0x0B, 0x11, 0x08, 0x84, 0x5F, 0xF2, 0x21, 0x10, 0x89, 0xFF, 0x44, 0x22, 0x11, 0x00,
    // '$'
    0x24, 0x00, 0x07, 0x10, 0x01, 0x09, 0x10, 0x20, 0xF6, 0x08, 0x10, 0x18, 0x08, 0x0C, 0x0C, 0x08, 0x3F, 0xC2, 0x04,
    0x00,
    // '%'
    0x25, 0x02, 0x0C, 0x0B, 0x01, 0x0E, 0x70, 0x4D, 0x88, 0x89, 0x08, 0x90, 0xDA, 0x07, 0x4E, 0x05, 0xB0, 0x91, 0x09,
    0x11, 0x1B, 0x20, 0xE0,
    // '&'
    0x26, 0x02, 0x0A, 0x0B, 0x01, 0x0B, 0x3C, 0x18, 0x84, 0x21, 0x08, 0x2C, 0x0C, 0x04, 0x8A, 0x10, 0x83, 0x30, 0xC7,
    0xC8,
    // '''
    0x27, 0x00, 0x01, 0x04, 0x01, 0x04, 0xF0,
    // '('
    0x28, 0x00, 0x04, 0x10, 0x01, 0x05, 0x02, 0x44, 0x48, 0x88, 0x88, 0x84, 0x44, 0x20,
    // ')'
    0x29, 0x00, 0x04, 0x10, 0x00, 0x05, 0x04, 0x22, 0x21, 0x11, 0x11, 0x12, 0x22, 0x40,
    // '*'
    0x2A, 0x02, 0x09, 0x06, 0x00, 0x08, 0x08, 0x24, 0x8F, 0x83, 0x81, 0x41, 0x10,
    // '+'
    0x2B, 0x05, 0x07, 0x07, 0x01, 0x09, 0x10, 0x20, 0x47, 0xF1, 0x02, 0x04, 0x00,
    // ','
    0x2C, 0x0B, 0x02, 0x05, 0x00, 0x04, 0x54, 0x80,
    // '-'
    0x2D, 0x08, 0x04, 0x01, 0x01, 0x06, 0xF0,
    // '.'
    0x2E, 0x0B, 0x01, 0x02, 0x01, 0x04, 0xC0,
    // '/'
    0x2F, 0x00, 0x07, 0x10, 0x00, 0x06, 0x02, 0x08, 0x10, 0x20, 0x81, 0x02, 0x08, 0x10, 0x40, 0x81, 0x04, 0x08, 0x10,
    0x40,
    // '0'
    0x30, 0x02, 0x07, 0x0B, 0x01, 0x09, 0x38, 0x8B, 0x1C, 0x18, 0x30, 0x60, 0xC1, 0x86, 0x88, 0xE0,
    // '1'
    0x31, 0x02, 0x04, 0x0B, 0x01, 0x09, 0x13, 0x59, 0x11, 0x11, 0x11, 0x10,
    // '2'
    0x32, 0x02, 0x06, 0x0B, 0x01, 0x09, 0x7A, 0x30, 0x41, 0x08, 0x21, 0x08, 0x42, 0x0F, 0xC0,
    // '3'
    0x33, 0x02, 0x07, 0x0B, 0x01, 0x09, 0x78, 0x08, 0x08, 0x10, 0x47, 0x01, 0x01, 0x02, 0x0B, 0xE0,
    // '4'
    0x34, 0x02, 0x07, 0x0B, 0x01, 0x09, 0x04, 0x18, 0x51, 0x22, 0x48, 0xA1, 0x7F, 0x04, 0x08, 0x10,
    // '5'
    0x35, 0x02, 0x07, 0x0B, 0x01, 0x09, 0x7E, 0x81, 0x02, 0x07, 0x81, 0x80, 0x81, 0x02, 0x0B, 0xE0,
    // '6'
    0x36, 0x02, 0x07, 0x0B, 0x01, 0x09, 0x1C, 0x61, 0x00, 0x0F, 0x90, 0xA0, 0xC1, 0x82, 0x88, 0xE0,
    // '7'
    0x37, 0x02, 0x07, 0x0B, 0x01, 0x09, 0xFE, 0x04, 0x10, 0x40, 0x82, 0x04, 0x08, 0x20, 0x40, 0x80,
    // '8'
    0x38, 0x02, 0x07, 0x0B, 0x01, 0x09, 0x39, 0x8A, 0x0C, 0x14, 0x47, 0x11, 0x41, 0x83, 0x89, 0xE0,
    // '9'
    0x39, 0x02, 0x07, 0x0B, 0x01, 0x09, 0x38, 0x8A, 0x0C, 0x18, 0x28, 0x4F, 0x81, 0x04, 0x11, 0xC0,
    // ':'
    0x3A, 0x05, 0x01, 0x08, 0x01, 0x04, 0xC3,
    // ';'
    0x3B, 0x05, 0x02, 0x0B, 0x00, 0x04, 0x50, 0x05, 0x48,
    // '<'
    0x3C, 0x05, 0x08, 0x07, 0x01, 0x09, 0x02, 0x0C, 0x30, 0x60, 0x30, 0x0C, 0x02,
    // '='
    0x3D, 0x06, 0x07, 0x04, 0x01, 0x09, 0xFE, 0x00, 0x07, 0xF0,
    // '>'
    0x3E, 0x05, 0x09, 0x07, 0x00, 0x09, 0x40, 0x1C, 0x01, 0x80, 0x70, 0x61, 0xC1, 0x00,
    // '?'
    0x3F, 0x02, 0x06, 0x0B, 0x01, 0x07, 0x78, 0x30, 0x41, 0x18, 0xC2, 0x00, 0x00, 0x82, 0x00,
    // '@'
    0x40, 0x02, 0x0D, 0x0D, 0x01, 0x0F, 0x0F, 0x81, 0x83, 0x10, 0x0C, 0x8F, 0xA8, 0x84, 0xC8, 0x26, 0x41, 0x32, 0x09,
    0x88, 0x5A, 0x3F, 0x90, 0x00, 0x60, 0x00, 0xFC, 0x00,
    // 'A'
    0x41, 0x02, 0x0B, 0x0B, 0x00, 0x0B, 0x04, 0x01, 0xC0, 0x28, 0x08, 0x81, 0x10, 0x61, 0x08, 0x21, 0xFC, 0x60, 0x48,
    0x0B, 0x00, 0x80,
    // 'B'
    0x42, 0x02, 0x08, 0x0B, 0x01, 0x0A, 0xF8, 0x86, 0x82, 0x82, 0x86, 0xFC, 0x82, 0x81, 0x81, 0x82, 0xFC,
    // 'C'
    0x43, 0x02, 0x09, 0x0B, 0x01, 0x0B, 0x1F, 0x10, 0x10, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x40, 0x30, 0x07, 0xC0,
    // 'D'
    0x44, 0x02, 0x09, 0x0B, 0x01, 0x0B, 0xFC, 0x41, 0x20, 0x50, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x81, 0x41, 0x3F, 0x00,
    // 'E'
    0x45, 0x02, 0x07, 0x0B, 0x01, 0x09, 0xFF, 0x02, 0x04, 0x08, 0x1F, 0xA0, 0x40, 0x81, 0x03, 0xF8,
    // 'F'
    0x46, 0x02, 0x07, 0x0B, 0x01, 0x09, 0xFF, 0x02, 0x04, 0x08, 0x1F, 0xA0, 0x40, 0x81, 0x02, 0x00,
    // 'G'
    0x47, 0x02, 0x09, 0x0B, 0x01, 0x0B, 0x1F, 0x10, 0x10, 0x10, 0x08, 0x04, 0x02, 0x03, 0x01, 0x40, 0xB0, 0x47, 0xE0,
    // 'H'
    0x48, 0x02, 0x09, 0x0B, 0x01, 0x0B, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0F, 0xFE, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x20,
    // 'I'
    0x49, 0x02, 0x01, 0x0B, 0x01, 0x03, 0xFF, 0xE0,
    // 'J'
    0x4A, 0x02, 0x07, 0x0B, 0x00, 0x08, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x81, 0x02, 0x09, 0xE0,
    // 'K'
    0x4B, 0x02, 0x09, 0x0B, 0x01, 0x0A, 0x81, 0x41, 0x23, 0x12, 0x0A, 0x06, 0x02, 0xC1, 0x10, 0x86, 0x40, 0xA0, 0x20,
    // 'L'
    0x4C, 0x02, 0x07, 0x0B, 0x01, 0x08, 0x81, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x81, 0x03, 0xF8,
    // 'M'
    0x4D, 0x02, 0x0B, 0x0B, 0x01, 0x0D, 0x40, 0x4C, 0x19, 0x01, 0x28, 0xA5, 0x14, 0x94, 0xB2, 0x9C, 0x33, 0x84, 0x30,
    0x06, 0x00, 0x80,
    // 'N'
    0x4E, 0x02, 0x09, 0x0B, 0x01, 0x0B, 0x80, 0xE0, 0x68, 0x32, 0x19, 0x0C, 0x46, 0x13, 0x05, 0x82, 0xC0, 0xE0, 0x20,
    // 'O'
    0x4F, 0x02, 0x0B, 0x0B, 0x01, 0x0D, 0x1F, 0x04, 0x11, 0x01, 0x40, 0x18, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x40, 0x44,
    0x10, 0x7C, 0x00,
    // 'P'
    0x50, 0x02, 0x08, 0x0B, 0x01, 0x0A, 0xFC, 0x82, 0x81, 0x81, 0x81, 0x82, 0xFC, 0x80, 0x80, 0x80, 0x80,
    // 'Q'
    0x51, 0x02, 0x0B, 0x0E, 0x01, 0x0D, 0x1F, 0x04, 0x11, 0x01, 0x40, 0x18, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x40, 0x44,
    0x10, 0x78, 0x02, 0x00, 0x30, 0x01, 0x80,
    // 'R'
    0x52, 0x02, 0x09, 0x0B, 0x01, 0x0A, 0xFC, 0x41, 0x20, 0x50, 0x28, 0x14, 0x13, 0xF1, 0x08, 0x82, 0x40, 0xA0, 0x20,
    // 'S'
    0x53, 0x02, 0x08, 0x0B, 0x01, 0x09, 0x3C, 0xC2, 0x80, 0x80, 0x40, 0x1C, 0x06, 0x02, 0x02, 0x06, 0x78,
    // 'T'
    0x54, 0x02, 0x09, 0x0B, 0x00, 0x09, 0xFF, 0x84, 0x02, 0x01, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00,
    // 'U'
    0x55, 0x02, 0x09, 0x0B, 0x01, 0x0B, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xA0, 0x8F, 0x80,
    // 'V'
    0x56, 0x02, 0x09, 0x0B, 0x00, 0x09, 0x80, 0xE0, 0xD0, 0x48, 0x26, 0x21, 0x10, 0x88, 0x28, 0x14, 0x0E, 0x02, 0x00,
    // 'W'
    0x57, 0x02, 0x0D, 0x0B, 0x00, 0x0D, 0x80, 0x0E, 0x10, 0xD0, 0x84, 0x8E, 0x24, 0x51, 0x22, 0x88, 0xA2, 0x85, 0x14,
    0x38, 0xE0, 0xC2, 0x04, 0x10,
    // 'X'
    0x58, 0x02, 0x09, 0x0B, 0x00, 0x09, 0xC1, 0xA0, 0x88, 0x86, 0xC1, 0x40, 0x60, 0x70, 0x6C, 0x22, 0x20, 0xB0, 0x60,
    // 'Y'
    0x59, 0x02, 0x09, 0x0B, 0x00, 0x09, 0x80, 0xA0, 0x90, 0x44, 0x41, 0x40, 0xA0, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00,
    // 'Z'
    0x5A, 0x02, 0x07, 0x0B, 0x01, 0x09, 0xFE, 0x04, 0x10, 0x41, 0x02, 0x08, 0x00, 0x41, 0x03, 0xF8,
    // '['
    0x5B, 0x00, 0x03, 0x10, 0x02, 0x05, 0xF2, 0x49, 0x24, 0x92, 0x49, 0x27,
    // '\'
    0x5C, 0x00, 0x07, 0x10, 0x00, 0x06, 0x80, 0x81, 0x02, 0x02, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x40, 0x40, 0x81,
    0x01,
    // ']'
    0x5D, 0x00, 0x03, 0x10, 0x00, 0x05, 0xE4, 0x92, 0x49, 0x24, 0x92, 0x4F,
    // '^'
    0x5E, 0x02, 0x07, 0x06, 0x01, 0x09, 0x10, 0x70, 0xA2, 0x24, 0x50, 0x40,
    // '_'
    0x5F, 0x0F, 0x08, 0x01, 0x00, 0x08, 0xFF,
    // '`'
    0x60, 0x01, 0x04, 0x03, 0x01, 0x06, 0x86, 0x10,
    // 'a'
    0x61, 0x05, 0x06, 0x08, 0x01, 0x08, 0x78, 0x30, 0x5F, 0xC6, 0x18, 0x5F,
    // 'b'
    0x62, 0x01, 0x07, 0x0C, 0x01, 0x09, 0x81, 0x02, 0x04, 0x0F, 0x90, 0xA0, 0xC1, 0x83, 0x06, 0x17, 0xC0,
    // 'c'
    0x63, 0x05, 0x06, 0x08, 0x01, 0x08, 0x3D, 0x08, 0x20, 0x82, 0x04, 0x0F,
    // 'd'
    0x64, 0x01, 0x07, 0x0C, 0x01, 0x09, 0x02, 0x04, 0x08, 0x13, 0xE8, 0x60, 0xC1, 0x83, 0x05, 0x09, 0xF0,
    // 'e'
    0x65, 0x05, 0x07, 0x08, 0x01, 0x09, 0x3C, 0x8A, 0x0F, 0xF8, 0x10, 0x10, 0x1E,
    // 'f'
    0x66, 0x01, 0x05, 0x0C, 0x01, 0x06, 0x7E, 0x21, 0x0F, 0xC2, 0x10, 0x84, 0x21, 0x00,
    // 'g'
    0x67, 0x05, 0x07, 0x0B, 0x01, 0x09, 0x3E, 0x86, 0x0C, 0x18, 0x30, 0x50, 0x9F, 0x02, 0x0B, 0xE0,
    // 'h'
    0x68, 0x01, 0x07, 0x0C, 0x01, 0x09, 0x81, 0x02, 0x04, 0x0F, 0x90, 0xE0, 0xC1, 0x83, 0x06, 0x0C, 0x10,
    // 'i'
    0x69, 0x01, 0x03, 0x0C, 0x00, 0x03, 0x48, 0x04, 0x92, 0x49, 0x20,
    // 'j'
    0x6A, 0x01, 0x04, 0x0F, 0xFF, 0x03, 0x22, 0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 0xC0,
    // 'k'
    0x6B, 0x01, 0x06, 0x0C, 0x01, 0x08, 0x82, 0x08, 0x20, 0x8A, 0x4A, 0x30, 0xA2, 0x48, 0xA1,
    // 'l'
    0x6C, 0x01, 0x04, 0x0C, 0x01, 0x04, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86,
    // 'm'
    0x6D, 0x05, 0x0B, 0x08, 0x01, 0x0D, 0xFB, 0xD1, 0x8E, 0x10, 0xC2, 0x18, 0x43, 0x08, 0x61, 0x0C, 0x21,
    // 'n'
    0x6E, 0x05, 0x07, 0x08, 0x01, 0x09, 0xFD, 0x0E, 0x0C, 0x18, 0x30, 0x60, 0xC1,
    // 'o'
    0x6F, 0x05, 0x08, 0x08, 0x01, 0x0A, 0x3C, 0x42, 0x81, 0x81, 0x81, 0x81, 0x42, 0x3C,
    // 'p'
    0x70, 0x05, 0x07, 0x0B, 0x01, 0x09, 0xF9, 0x0A, 0x0C, 0x18, 0x30, 0x61, 0x7C, 0x81, 0x02, 0x00,
    // 'q'
    0x71, 0x05, 0x07, 0x0B, 0x01, 0x09, 0x3E, 0x86, 0x0C, 0x18, 0x30, 0x50, 0x9F, 0x02, 0x04, 0x08,
    // 'r'
    0x72, 0x05, 0x05, 0x08, 0x01, 0x06, 0xFC, 0x21, 0x08, 0x42, 0x10,
    // 's'
    0x73, 0x05, 0x05, 0x08, 0x01, 0x07, 0x7C, 0x20, 0xC3, 0x04, 0x3E,
    // 't'
    0x74, 0x02, 0x05, 0x0B, 0x01, 0x07, 0x84, 0x21, 0xF8, 0x42, 0x10, 0x84, 0x1E,
    // 'u'
    0x75, 0x05, 0x07, 0x08, 0x01, 0x09, 0x83, 0x06, 0x0C, 0x18, 0x30, 0x50, 0xBF,
    // 'v'
    0x76, 0x05, 0x07, 0x08, 0x00, 0x07, 0x83, 0x05, 0x12, 0x22, 0x85, 0x0E, 0x08,
    // 'w'
    0x77, 0x05, 0x0D, 0x08, 0x00, 0x0D, 0x82, 0x0C, 0x10, 0x51, 0xC4, 0x8A, 0x26, 0x5B, 0x14, 0x50, 0xE3, 0x82, 0x08,
    // 'x'
    0x78, 0x05, 0x08, 0x08, 0x00, 0x08, 0xC3, 0x66, 0x24, 0x18, 0x18, 0x24, 0x42, 0xC3,
    // 'y'
    0x79, 0x05, 0x07, 0x0B, 0x00, 0x07, 0x82, 0x89, 0x12, 0x22, 0x85, 0x04, 0x08, 0x10, 0x43, 0x00,
    // 'z'
    0x7A, 0x05, 0x06, 0x08, 0x01, 0x08, 0xFC, 0x10, 0x84, 0x21, 0x08, 0x3F,
    // '{'
    0x7B, 0x00, 0x05, 0x10, 0x00, 0x05, 0x19, 0x08, 0x42, 0x10, 0x98, 0x61, 0x08, 0x42, 0x10, 0x83,
    // '|'
    0x7C, 0x00, 0x01, 0x10, 0x02, 0x05, 0xFF, 0xFF,
    // '}'
    0x7D, 0x00, 0x05, 0x10, 0x00, 0x05, 0xC1, 0x08, 0x42, 0x10, 0x83, 0x31, 0x08, 0x42, 0x10, 0x98,
    // '~'
    0x7E, 0x07, 0x07, 0x02, 0x01, 0x09, 0x73, 0x18,

    // Terminator
    0xFF };
#endif // AMALGAMATED_BUILD
