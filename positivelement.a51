ORG 0000H
SJMP 0030H

ORG 0030H

MOV R0, #30H      ; Input data starts from 30H
MOV 65H, #00H     ; Output stored at 65H
MOV R2, #05H      ; Number of elements

BACK: MOV A, @R0
      JB ACC.7, SKIP   ; Skip if negative
      INC 65H          ; Increment count

SKIP: INC R0
      DJNZ R2, BACK

HERE: SJMP HERE

END