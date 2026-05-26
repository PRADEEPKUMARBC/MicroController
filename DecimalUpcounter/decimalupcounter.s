ORG 0H 
SJMP 30H 
ORG 30H 
MOV A, #00 
BACK: ACALL DELAY 
DEC A 
JNZ BACK 
 HERE: SJMP HERE 

  DELAY: MOV R1,#0FFH //Delay routine 
  LABEL2:MOV R2,#0FFH 
  LABEL1:MOV R3,#0FFH 
   LABEL:DJNZ R3, LABEL
                 DJNZ R2,LABEL1 
                 DJNZ R1,LABEL2 
                 RET 
                 END
