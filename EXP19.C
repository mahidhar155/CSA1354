Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {449 278}
	}
	state {
		coord {638 262}
	}
	state {
		coord {858 269}
	}
	state {
		final {yes}
		coord {642 376}
	}
	edge 0 1 {
		transits {_}
		offset {0.5235987755982988}
		direction {R}
	}
	edge 0 0 {
		transits {a}
		offset {2.356194490192345}
		direction {R}
	}
	edge 1 2 {
		transits {a}
		offset {0.5235987755982988}
		direction {L}
		output {_}
	}
	edge 2 0 {
		transits {a}
		offset {1.5501747371257077}
		direction {R}
		output {_}
	}
	edge 2 2 {
		transits {_}
		offset {0.6930688286658493}
		direction {L}
	}
	edge 1 1 {
		transits {_}
		offset {1.5291537476963082}
		direction {R}
	}
	edge 1 3 {
		transits {d}
		offset {0.5235987755982988}
		direction {R}
	}
	label {
		text {Q0}
		font {SansSerif 12 -}
		coord {474 301}
	}
	label {
		text {Q1}
		font {SansSerif 12 -}
		coord {662 280}
	}
	label {
		text {Q2}
		font {SansSerif 12 -}
		coord {877 301}
	}
	label {
		text {Q3 - FINAL STATE}
		font {SansSerif 12 -}
		coord {646 415}
	}
	label {
		text {Turing Machine for Subtraction of Unary Numbers}
		font {SansSerif 12 -}
		coord {489 548}
	}
}