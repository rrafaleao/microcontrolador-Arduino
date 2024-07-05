// Global Variables

int soma = 13; // Variable storing the state of pin 13 (input).
int carryBit = 0; // Variable storing the carry bit for addition.

// Variables to store the states of input pins (nib1a to nib1d for the first set of 4 bits and nib2a to nib2d for the second set).
// Variables to store the results of the addition (res1a to res1d for the resulting 4 bits).
int nib1a, nib1b, nib1c, nib1d = 0;
int nib2a, nib2b, nib2c, nib2d = 0;
int res1a, res1b, res1c, res1d = 0;

// The setup function is the preparation, it will be the first function to run
// It will be run once and is used to set the PinMode

void setup()
{
    // Set pins 0 to 7 as inputs
    pinMode(0, INPUT);
    pinMode(1, INPUT);
    pinMode(2, INPUT);
    pinMode(3, INPUT);
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(7, INPUT);

    // Set pins 8 to 12 as outputs
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);

    // Set pin 13 as input
    pinMode(13, INPUT);
}

// Function that adds two bits and the carry bit
int somaBit(int b1a, int b2a, int cBit)
{
    int bitResult = 0;
    // If the sum of the bits (considering the carry bit) is odd, the result is 1, otherwise it is 0
    if ((b1a ^ b2a) ^ cBit)
    {
        bitResult = 1;
    }
    else
    {
        bitResult = 0;
    }
    return bitResult;
}

// Function that calculates the carry bit resulting from the addition of two bits and the previous carry bit
int somaCarryBit(int b1a, int b2a, int cBit)
{
    // If at least two of the three bits are 1, the carry bit is 1, otherwise it is 0
    if ((b1a && b2a)||(b1a && cBit)||(b2a && cBit))
    {
        cBit = 1;
    }
    else
    {
        cBit = 0;
    }
    return cBit;
}

// The loop function stays in a loop, allowing the program to change,
// respond and control the system
void loop()
{
    // Read the state of pin 13 (used to control the addition operation)
    soma = digitalRead(13);

    // Read the states of the input pins (the two 4-bit nibbles)
    nib1a = digitalRead(0);
    nib1b = digitalRead(1);
    nib1c = digitalRead(2);
    nib1d = digitalRead(3);
    nib2a = digitalRead(4);
    nib2b = digitalRead(5);
    nib2c = digitalRead(6);
    nib2d = digitalRead(7);

    // If pin 13 is active (value 1), perform the addition of the nibbles
    if (soma == 1)
    {
        carryBit = 0; // Initialize the carry bit to 0

        // Add the individual bits of the nibbles, updating the carry bit
        res1a = somaBit(nib1a, nib2a, carryBit);
        carryBit = somaCarryBit(nib1a, nib2a, carryBit);
        res1b = somaBit(nib1b, nib2b, carryBit);
        carryBit = somaCarryBit(nib1b, nib2b, carryBit);
        res1c = somaBit(nib1c, nib2c, carryBit);
        carryBit = somaCarryBit(nib1c, nib2c, carryBit);
        res1d = somaBit(nib1d, nib2d, carryBit);
        carryBit = somaCarryBit(nib1d, nib2d, carryBit);
    }

    // Write the results of the addition to the output pins (8 to 12)
    digitalWrite(8, res1a);
    digitalWrite(9, res1b);
    digitalWrite(10, res1c);
    digitalWrite(11, res1d);
    digitalWrite(12, carryBit); // Write the carry bit to pin 12
}
