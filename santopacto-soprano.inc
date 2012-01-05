\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \major

		R1*2  |
		cis' 2 e' 4. r8  |
		fis' 4. ( e' 8 ) e' 4. r8  |
%% 5
		a 4. a 8 a' 4. b' 8  |
		gis' 16 ( fis' 8 ) e' 4. r16 r8 e' 16 e' e' e' ~  |
		e' 8 d' 4 cis' 16 b 8 b 8. r8 e'  |
		cis'' 4. b' 16 b' 8 a' 4. r16  |
		gis' 8 a' 4 r8 a' a' 16 b' 8. cis'' 8  |
%% 10
		cis'' 16 ( b' 8. ~ b' 2 ) r8 r16 gis' ~  |
		\time 2/4
		gis' 16 a' 8. r8 a' 16 a' ~  |
		a' 16 d' 4 r16 r8  |
		gis' 8 gis' 16 a' 8 b' cis'' 16 ~  |
		cis'' 8 b' 16 a' 8. a' 16 gis' ~  |
%% 15
		gis' 16 a' 8. r16 a' a' a' ~  |
		a' 16 d' 4 r16 r a'  |
		gis' 8 gis' 16 a' 8 b' cis'' 16 ( ~
		% warning: overlong bar truncated here |
		cis'' 8 b' 16 a' 8. ) a' 16 gis' ~  |
		gis' 16 a' 8. r8 a' 16 a' ~  |
%% 20
		a' 16 d' 4 r16 r a'  |
		gis' 8 gis' 16 a' 8 b' cis'' 16 ( ~
		% warning: overlong bar truncated here |
		cis'' 8 b' 16 ) a' 8. a' 16 gis' ~  |
		gis' 16 a' 8. r16 a' a' a' ~  |
		a' 16 d' 4 r16 r a'  |
%% 25
		gis' 8 gis' 16 a' 8 b' 8.  |
		a' 2  |
		r8 r16 b' 8. cis'' 8  |
		cis'' 16 ( b' ~ b' 4. ~
		% warning: overlong bar truncated here |
		b' 4 ) r8 r16 gis' ~  |
%% 30
		gis' 16 a' 8. r8 a' 16 a' ~  |
		a' 16 d' 4 r16 r8  |
		gis' 8 gis' 16 a' 8 b' cis'' 16 ~  |
		cis'' 8 b' 16 a' 8. a' 16 gis' ~  |
		gis' 16 a' 8. r16 a' a' a' ~  |
%% 35
		a' 16 d' 4 r16 r a'  |
		gis' 8 gis' 16 a' 8 b' cis'' 16 ( ~
		% warning: overlong bar truncated here |
		cis'' 8 b' 16 a' 8. ) a' 16 gis' ~  |
		gis' 16 a' 8. r16 r a' a' ~  |
		a' 16 d' 4 r16 r a'  |
%% 40
		gis' 8 gis' 16 a' 8 b' cis'' 16 ( ~
		% warning: overlong bar truncated here |
		cis'' 8 b' 16 ) a' 8. a' 16 gis' ~  |
		gis' 16 a' 8. r16 a' a' a' ~  |
		a' 16 d' 4 r16 r a'  |
		gis' 8 gis' 16 a' 8 b' 8.  |
%% 45
		a' 4 r8 r16 d'  |
		d'' 8 cis'' 16 a' 8 b' 8.  |
		a' 2 ~  |
		a' 2  |
		R2  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
		San -- to, san __ to,
		Dios om -- ni -- po -- ten __ te,
		to -- da la Tie -- rra pro -- cla -- ma
		tu san -- to nom -- bre:
		San -- to, san -- to e -- res Tú. __

		San -- to, ¡oh, san -- to!,
		san -- "to es" el Se -- ñor, mi Dios.
		Ben -- di -- to el que vie -- ne
		en nom -- bre del Se -- ñor. __
		Ho -- san -- na, ho -- san -- na,
		ho -- san -- "na en" las al -- tu __ ras.
		Ben -- di -- to el que vie -- ne
		en nom -- bre del Se -- ñor.
		"...e" -- res Tú.

		San -- to, ¡oh, san -- to!,
		san -- "to es" el Se -- ñor, mi Dios.
		Ben -- di -- to el que vie -- ne
		en nom -- bre del Se -- ñor. __
		Ho -- san -- na, ho -- san -- na,
		ho -- san -- "na en" las al -- tu __ ras.
		Ben -- di -- to el que vie -- ne
		en nom -- bre del Se -- ñor.
		en nom -- bre del Se -- ñor.
	}
>>
