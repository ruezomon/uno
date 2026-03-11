#pragma once

struct Card {
   private:
      unsigned short value;
      unsigned short color;
   public:
      Card(unsigned short value, unsigned short color);
	   unsigned short getValue();
	   unsigned short getColor();
};
