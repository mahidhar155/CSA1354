Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {130 260}
	}
	state {
		coord {282 260}
	}
	state {
		coord {445 257}
	}
	state {
		coord {610 254}
	}
	state {
		coord {138 404}
	}
	state {
		final {yes}
		coord {140 532}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
		direction {R}
		output {c}
	}
	edge 1 1 {
		transits {ad}
		offset {1.501939837493852}
		direction {R}
	}
	edge 1 2 {
		transits {b}
		offset {0.5235987755982988}
		direction {R}
		output {d}
	}
	edge 2 3 {
		transits {b}
		offset {0.5235987755982988}
		direction {L}
		output {d}
	}
	edge 3 3 {
		transits {ad}
		offset {1.1372148428431348}
		direction {L}
	}
	edge 3 0 {
		transits {c}
		offset {0.5235987755982988}
		direction {R}
	}
	edge 0 4 {
		transits {d}
		offset {-0.41349664636424}
		direction {R}
	}
	edge 4 5 {
		transits {_}
		offset {-0.7601248521273181}
		direction {R}
	}
	edge 4 4 {
		transits {d}
		offset {-0.17467219900823971}
		direction {R}
	}
	label {
		text {LOGIC : }
		font {SansSerif 12 -}
		coord {209 68}
	}
	label {
		text {-> 'a' is replaced with 'c'}
		font {SansSerif 12 -}
		coord {211 91}
	}
	label {
		text {-> 'b' is replaced with 'd'}
		font {SansSerif 12 -}
		coord {211 109}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {130 298}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {136 296}
	}
	label {
		text {q0}
		font {SansSerif 12 -}
		coord {134 296}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {273 287}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {280 293}
	}
	label {
		text {q1}
		font {SansSerif 12 -}
		coord {286 296}
	}
	label {
		text {q2}
		font {SansSerif 12 -}
		coord {439 289}
	}
	label {
		text {q3}
		font {SansSerif 12 -}
		coord {608 292}
	}
	label {
		text {q4}
		font {SansSerif 12 -}
		coord {138 440}
	}
	label {
		text {q5 - FINAL STATE}
		font {SansSerif 12 -}
		coord {142 568}
	}
	label {
		text {TURING MACHINE for L = a^n.b^2n}
		font {SansSerif 12 -}
		coord {248 615}
	}
}