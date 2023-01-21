Automaton Simulator, v1.0
dfa {
	alphabet {abcd*}
	state {
		initial {yes}
		coord {531 194}
	}
	state {
		final {yes}
		coord {862 196}
	}
	state {
		coord {466 382}
	}
	edge 0 1 {
		transits {c}
		offset {0.5235987755982988}
	}
	edge 0 0 {
		transits {b}
		offset {2.356194490192345}
	}
	edge 1 1 {
		transits {a}
		offset {0.7531512809621944}
	}
	edge 0 2 {
		transits {a}
		offset {0.5235987755982988}
	}
	edge 1 2 {
		transits {bc}
		offset {0.5235987755982988}
	}
	edge 2 2 {
		transits {abc}
		offset {2.356194490192345}
	}
	label {
		text {Q0}
		font {SansSerif 12 -}
		coord {546 218}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {862 225}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {868 224}
	}
	label {
		text {Q1}
		font {SansSerif 12 -}
		coord {858 231}
	}
	label {
		text {Q2 - DEAD STATE}
		font {SansSerif 12 -}
		coord {459 415}
	}
}