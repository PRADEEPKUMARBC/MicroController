ORG 0000H
SJMP 0030H

ORG 0030H

MOV R0, #30H      ; Input data starts from 30H
MOV 65H, #00H     ; Store negative count at 65H
MOV R2, #05H      ; Number of elements

BACK: MOV A, @R0
      JNB ACC.7, SKIP   ; If positive, skip
      INC 65H           ; Increment negative count

SKIP: INC R0
      DJNZ R2, BACK

HERE: SJMP HERE

END