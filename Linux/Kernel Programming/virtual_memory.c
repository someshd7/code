/*
virtual memory->layer of indirection

How VM works?
    Basic idea is saperate memory spaces.

    vm- what the program sees
    pm-the physical ram in the computer

    virtual addresses(VA) - what program uses
                            In MIPS this is full 32 bit space. 0 to 2^32 -1.
    
    Physical addresses(PA)- What hardware uses to talk ot the RAM
                            Address space is determined by how much ram is installed in the system
                            
*/