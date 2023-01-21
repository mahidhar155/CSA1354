Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {416 228}
	}
	state {
		coord {650 236}
	}
	state {
		coord {881 228}
	}
	state {
		final {yes}
		coord {1095 236}
	}
	edge 0 0 {
		transits {a}
		offset {1.4940244355251187}
		direction {R}
	}
	edge 0 1 {
		transits {_}
		offset {0.5235987755982988}
		direction {R}
		output {a}
	}
	edge 1 1 {
		transits {a}
		offset {1.4618543698050308}
		direction {R}
	}
	edge 1 2 {
		transits {_}
		offset {0.5235987755982988}
		direction {L}
	}
	edge 2 3 {
		transits {a}
		offset {0.5235987755982988}
		direction {R}
		output {_}
	}
	label {
		text {q1}
		font {SansSerif 12 -}
		coord {412 267}
	}
	label {
		text {q2}
		font {SansSerif 12 -}
		coord {644 276}
	}
	label {
		text {q3}
		font {SansSerif 12 -}
		coord {869 268}
	}
	label {
		text {q4}
		font {SansSerif 12 -}
		coord {1086 277}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {590 331}
	}
	label {
		text {Turing Machine for addition}
		font {SansSerif 12 -}
		coord {604 312}
	}
	label {
		text {NOTE : }
		font {SansSerif 12 -}
		coord {442 355}
	}
	label {
		text {-> Addition is done in unary.}
		font {SansSerif 12 -}
		coord {462 376}
	}
	label {
		text {i.e., 4 is represented as 'aaaa'}
		font {SansSerif 12 -}
		coord {466 393}
	}
	label {
		text {3 is represented as 'aaa' and so on.}
		font {SansSerif 12 -}
		coord {487 411}
	}
}