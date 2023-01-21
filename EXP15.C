Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {191 246}
	}
	state {
		coord {342 241}
	}
	state {
		coord {500 243}
	}
	state {
		coord {222 389}
	}
	state {
		final {yes}
		coord {392 390}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
		direction {R}
		output {c}
	}
	edge 1 2 {
		transits {b}
		offset {0.5235987755982988}
		direction {L}
		output {d}
	}
	edge 1 1 {
		transits {ad}
		offset {1.6142472221864275}
		direction {R}
	}
	edge 2 2 {
		transits {ad}
		offset {0.982793723247329}
		direction {L}
	}
	edge 2 0 {
		transits {c}
		offset {-1.0711822254419934}
		direction {R}
	}
	edge 0 3 {
		transits {d}
		offset {-0.8798034585190508}
		direction {R}
	}
	edge 3 4 {
		transits {_}
		offset {-0.25574886719607715}
		direction {L}
	}
	edge 3 3 {
		transits {d}
		offset {-2.5748634360662868}
		direction {R}
	}
	label {
		text {Q0}
		font {SansSerif 12 -}
		coord {201 280}
	}
	label {
		text {Q1}
		font {SansSerif 12 -}
		coord {335 275}
	}
	label {
		text {Q2}
		font {SansSerif 12 -}
		coord {514 284}
	}
	label {
		text {Q3}
		font {SansSerif 12 -}
		coord {225 424}
	}
	label {
		text {Q4}
		font {SansSerif 12 -}
		coord {385 421}
	}
	label {
		text {TURING MACHINE for L = a^n.b^n}
		font {SansSerif 12 -}
		coord {218 496}
	}
}