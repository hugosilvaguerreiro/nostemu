/*
 * 1. LD nn,n 
 * Description:
 * 	Put value nn into n.
 * Use with:
 * 	nn = B,C,D,E,H,L,BC,DE,HL,SP
 * 	n = 8 bit immediate value
 * */

/*
 * 2. LD r1,r2
 * Description:
 *  Put value r2 into r1.
 * Use with:
 *  r1,r2 = A,B,C,D,E,H,L,(HL)
 * */

/*
 * 3. LD A,n
 * Description:
 *  Put value n into A.
 * Use with:
 *  n = A,B,C,D,E,H,L,(BC),(DE),(HL),(nn),#
 *  nn = two byte immediate value. (LS byte first.)
 * */

/*
 * 4. LD n,A
 * Description:
 * Put value A into n.
 * Use with:
 * n = A,B,C,D,E,H,L,(BC),(DE),(HL),(nn)
 * nn = two byte immediate value. (LS byte first.)
 * */

/*
 * 5. LD A,(C)
 * Description:
 * 	Put value at address $FF00 + register C into A.
 * Same as: LD A,($FF00+C)
 * */


/*
 * 6. LD (C),A
 * Description:
 * Put A into address $FF00 + register C.<Paste>
 * */

/*
 * 7. LD A,(HLD)
 * Description: Same as: LDD A,(HL)
 * 8. LD A,(HL-)
 * Description: Same as: LDD A,(HL)
 * 9. LDD A,(HL)
 * Description:
 * Put value at address HL into A. Decrement HL.
 *  Same as: LD A,(HL) - DEC HL
 * */

#ifndef LD_ 
#define LD_

#include "../../cpu.h"
#include "../../data.h"

class  LD {
    Data data;
    REGISTER r1, r2;

        
};

#endif