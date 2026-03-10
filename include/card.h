struct Card {
    private:
        unsigned short value;
        unsigned short color;
    public:
	static enum COLORS {RED, BLUE, GREEN, YELLOW};
    	Card(unsigned short value, unsigned short color);
	unsigned short getValue();
	unsigned short getColor();
};
