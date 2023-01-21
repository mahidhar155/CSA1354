Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {278 364}
	}
	state {
		coord {470 237}
	}
	state {
		coord {489 505}
	}
	state {
		coord {704 241}
	}
	state {
		coord {718 496}
	}
	state {
		coord {857 370}
	}
	state {
		final {yes}
		coord {567 352}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
		direction {R}
		output {_}
	}
	edge 0 2 {
		transits {b}
		offset {-0.5714502984845238}
		direction {R}
		output {_}
	}
	edge 1 3 {
		transits {_}
		offset {0.13650003684394812}
		direction {L}
	}
	edge 1 1 {
		transits {ab}
		offset {2.0998267978745453}
		direction {R}
	}
	edge 3 5 {
		transits {a}
		offset {0.5235987755982988}
		direction {L}
		output {_}
	}
	edge 5 5 {
		transits {ab}
		offset {0.4360955277530474}
		direction {L}
	}
	edge 5 0 {
		transits {_}
		offset {-1.506561695445222}
		direction {R}
	}
	edge 2 4 {
		transits {_}
		offset {-0.19146670783515285}
		direction {L}
	}
	edge 4 5 {
		transits {b}
		offset {-0.538560766351682}
		direction {L}
		output {_}
	}
	edge 3 6 {
		transits {_}
		offset {-0.4022736207418096}
		direction {R}
	}
	edge 4 6 {
		transits {_}
		offset {0.31112396185437907}
		direction {R}
	}
	edge 2 2 {
		transits {ab}
		offset {1.5844941001677626}
		direction {R}
	}
	label {
		text {Q0}
		font {SansSerif 12 -}
		coord {301 383}
	}
	label {
		text {Q1}
		font {SansSerif 12 -}
		coord {466 275}
	}
	label {
		text {Q2}
		font {SansSerif 12 -}
		coord {702 280}
	}
	label {
		text {Q3}
		font {SansSerif 12 -}
		coord {865 405}
	}
	label {
		text {Q4}
		font {SansSerif 12 -}
		coord {717 533}
	}
	label {
		text {Q5}
		font {SansSerif 12 -}
		coord {488 544}
	}
	label {
		text {Q6}
		font {SansSerif 12 -}
		coord {552 384}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {529 401}
	}
	label {
		text {FINAL STATE}
		font {SansSerif 12 -}
		coord {506 395}
	}
	label {
		text {Turing Machine for accepting ODD Palindrome.}
		font {SansSerif 12 -}
		coord {411 600}
	}
}