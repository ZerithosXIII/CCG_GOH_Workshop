(define "vet"
	{"lvl_1"	%0} ;1
	{"lvl_2"	%1} ;3
	{"lvl_3"	%2} ;6
	{"lvl_4"	%3} ;10
	{"lvl_5"	%4} ;15
	{"lvl_6"	%5} ;20
	{"lvl_7"	%6} ;30
	{"lvl_8"	%7} ;40
)
(define "vet_mp"
	(mod "mp"
		{"lvl_1"	%0} ;1
		{"lvl_2"	%1} ;3
		{"lvl_3"	%2} ;6
		{"lvl_4"	%3} ;10
		{"lvl_5"	%4} ;15
		{"lvl_6"	%5} ;20
		{"lvl_7"	%6} ;30
		{"lvl_8"	%7} ;40
	)
)

(define "veterancy_lvl_0"
	("vet"    args 1 3  6 10 15 20 30 40)
	("vet_mp" args 1 3  6 10 15 20 30 40)
)
(define "veterancy_lvl_1"
	("vet"    args 0 2 5 9 14 19 29 39)
	("vet_mp" args 0 2 5 9 14 19 29 39)
)
(define "veterancy_lvl_2"
	("vet"    args -1 0 3 7 12 17 27 37)
	("vet_mp" args -1 0 3 7 12 17 27 37)
)
(define "veterancy_lvl_3"
	("vet"    args -1 -1 0 4 9 14 24 34)
	("vet_mp" args -1 -1 0 4 9 14 24 34)
)
(define "veterancy_lvl_4"
	("vet"    args -1 -1 -1 0 5 10 20 30)
	("vet_mp" args -1 -1 -1 0 5 10 20 30)
)
(define "veterancy_lvl_5"
	("vet"    args -1 -1 -1 -1 0 5 15 25)
	("vet_mp" args -1 -1 -1 -1 0 5 15 25)
)
(define "veterancy_lvl_6"
	("vet"    args -1 -1 -1 -1 -1  0 10 20)
	("vet_mp" args -1 -1 -1 -1 -1 0 10 20)
)
(define "veterancy_lvl_7"
	("vet"    args -1 -1 -1 -1 -1 -1 0 10)
	("vet_mp" args -1 -1 -1 -1 -1 -1 0 10)
)
(define "veterancy_lvl_8"
	("vet"    args -1 -1 -1 -1 -1 -1 -1 0)
	("vet_mp" args -1 -1 -1 -1 -1 -1 -1 0)
)