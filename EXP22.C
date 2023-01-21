Automaton Simulator, v1.0
dfa {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {486 318}
	}
	state {
		coord {730 311}
	}
	state {
		final {yes}
		coord {1015 302}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
	}
	edge 1 2 {
		transits {b}
		offset {0.5235987755982988}
	}
	edge 2 1 {
		transits {a}
		offset {0.5235987755982988}
	}
	edge 2 0 {
		transits {b}
		offset {7.040877258733479}
	}
	edge 0 0 {
		transits {b}
		offset {2.356194490192345}
	}
	edge 1 1 {
		transits {a}
		offset {1.5707963267948966}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {478 354}
	}
	label {
		text {QO}
		font {SansSerif 12 -}
		coord {480 350}
	}
	label {
		text {Q1}
		font {SansSerif 12 -}
		coord {725 341}
	}
	label {
		text {Q2 - FINAL STATE}
		font {SansSerif 12 -}
		coord {1012 336}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {1118 541}
	}
}