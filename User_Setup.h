#define USER_SETUP_INFO "User_Setup"
#define ST7735_DRIVER      // Define additional parameters below for this display
#define TFT_WIDTH 128
#define TFT_HEIGHT 160
#define ST7735_REDTAB
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS   17  // Chip select control pin
#define TFT_DC   2  // Data Command control pin
#define TFT_RST   14  // Reset pin (could connect to RST pin)
#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 Bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 Bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 Bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 Bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 Bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 Bytes in FLASH, only characters 1234567890:-.
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts
#define SMOOTH_FONT
#define SPI_FREQUENCY 27000000
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000

#define TFT_RGB_ORDER TFT_RGB

