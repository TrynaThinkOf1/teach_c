; just know that ive cut a lot of advanced assembly stuff out because its unnecessary
; and I don't understand some of it, and it's stupid, and it's Apple-ARM exclusive

_main:                                  ; start the section of memory with the main function

	mov	w0, #42                         ; moves the immediate value 42 into the w0 register, which is
										;  typically used to hold the return value of a function.
										
	ret									; end the function, this looks different on Linux

; see that was actually really simple. assembly can get super complex tho
; it was more complex and I stripped it down to the bare minimum
