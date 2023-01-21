Automaton Simulator, v1.0
dpda {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {374 256}
	}
	state {
		coord {612 252}
	}
	state {
		final {yes}
		coord {901 242}
	}
	edge 0 0 {
		transits {a}
		offset {2.356194490192345}
		action {push a}
	}
	edge 0 1 {
		transits {b}
		offset {0.5235987755982988}
		stacktop {a}
		action {pop}
	}
	edge 1 2 {
		transits {d}
		offset {0.5235987755982988}
		stacktop {c}
		action {pop}
	}
	edge 1 1 {
		transits {b}
		offset {1.5612728052012839}
		stacktop {a}
		action {pop}
	}
	edge 0 0 {
		transits {c}
		offset {-0.5012642648715824}
		action {push c}
	}
	label {
		text {q0}
		font {SansSerif 12 -}
		coord {373 300}
	}
	label {
		text {q1}
		font {SansSerif 12 -}
		coord {602 288}
	}
	label {
		text {q2}
		font {SansSerif 12 -}
		coord {895 284}
	}
	label {
		text {Deterministic PDA for L = a^n.b^n.}
		font {SansSerif 12 -}
		coord {501 350}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {650 414}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {579 346}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {579 346}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {689 336}
	}
	label {
		text {ASSUMPTIONS :}
		font {SansSerif 12 -}
		coord {430 88}
	}
	label {
		text {c == Z0 (Stack Reference)}
		font {SansSerif 12 -}
		coord {455 104}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {454 116}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {454 117}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {454 117}
	}
	label {
		text {d == epsilon (End Of String)}
		font {SansSerif 12 -}
		coord {454 117}
	}
}