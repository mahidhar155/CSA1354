Automaton Simulator, v1.0
dfa {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {465 252}
	}
	state {
		coord {639 250}
	}
	state {
		final {yes}
		coord {825 248}
	}
	edge 0 1 {
		transits {a}
		offset {0.11386701464431741}
	}
	edge 1 2 {
		transits {b}
		offset {0.17104169717480786}
	}
	edge 0 0 {
		transits {b}
		offset {2.356194490192345}
	}
	edge 1 1 {
		transits {a}
		offset {1.555645970920127}
	}
	edge 2 2 {
		transits {ab}
		offset {0.8017901377054536}
	}
	label {
		text {Q0}
		font {SansSerif 12 -}
		coord {459 297}
	}
	label {
		text {Q1}
		font {SansSerif 12 -}
		coord {634 290}
	}
	label {
		text {Q2 - FINAL STATE}
		font {SansSerif 12 -}
		coord {818 282}
	}
	label {
		text {DFA that accepts L = (a+b)*.a.b.(a+b)*}
		font {SansSerif 12 -}
		coord {538 347}
	}
}