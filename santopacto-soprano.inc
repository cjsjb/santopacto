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

		R1*4  |
%% 5
		cis' 1  |
		e' 2. r4  |
		fis' 2. ( e' 4 )  |
		e' 2. r4  |
		a 2. a 4  |
%% 10
		a' 2. b' 4  |
		gis' 8 ( fis' 4 ) e' 2 ~ e' 8 ~  |
		e' 8 r r4 e' 8 e' e' e' ~  |
		e' 4 d' 2 cis' 8 b ~  |
		b 8 b 4. r4 e'  |
%% 15
		cis'' 2. b' 8 b' ~  |
		b' 8 a' 2. r8  |
		gis' 4 a' 2 r4  |
		a' 4 a' 8 b' 4. cis'' 4  |
		cis'' 8 ( b' 4. ~ b' 2 ~  |
%% 20
		b' 2 ) r4 r8 gis' ~  |
		gis' 8 a' 4. r4 a' 8 a' ~  |
		a' 8 d' 2 r8 r4  |
		gis' 4 gis' 8 a' 4 b' cis'' 8 ~  |
		cis'' 4 b' 8 a' 4. a' 8 gis' ~  |
%% 25
		gis' 8 a' 4. r8 a' a' a' ~  |
		a' 8 d' 2 r8 r a'  |
		gis' 4 gis' 8 a' 4 b' cis'' 8 ( ~  |
		cis'' 4 b' 8 a' 4. ) a' 8 gis' ~  |
		gis' 8 a' 4. r4 a' 8 a' ~  |
%% 30
		a' 8 d' 2 r8 r a'  |
		gis' 4 gis' 8 a' 4 b' cis'' 8 ( ~  |
		cis'' 4 b' 8 ) a' 4. a' 8 gis' ~  |
		gis' 8 a' 4. r8 a' a' a' ~  |
		a' 8 d' 2 r8 r a'  |
%% 35
		gis' 4 gis' 8 a' 4 b' 4.  |
		a' 1  |
		r4 r8 b' 4. cis'' 4  |
		cis'' 8 ( b' ~ b' 2. ~  |
		b' 2 ) r4 r8 gis' ~  |
%% 40
		gis' 8 a' 4. r4 a' 8 a' ~  |
		a' 8 d' 2 r8 r4  |
		gis' 4 gis' 8 a' 4 b' cis'' 8 ~  |
		cis'' 4 b' 8 a' 4. a' 8 gis' ~  |
		gis' 8 a' 4. r8 a' a' a' ~  |
%% 45
		a' 8 d' 2 r8 r a'  |
		gis' 4 gis' 8 a' 4 b' cis'' 8 ( ~  |
		cis'' 4 b' 8 a' 4. ) a' 8 gis' ~  |
		gis' 8 a' 4. r4 a' 8 a' ~  |
		a' 8 d' 2 r8 r a'  |
%% 50
		gis' 4 gis' 8 a' 4 b' cis'' 8 ( ~  |
		cis'' 4 b' 8 ) a' 4. a' 8 gis' ~  |
		gis' 8 a' 4. r8 a' a' a' ~  |
		a' 8 d' 2 r8 r a'  |
		gis' 4 gis' 8 a' 4 b' 4.  |
%% 55
		a' 2 r4 r8 d'  |
		d'' 4 cis'' 8 a' 4 b' 4.  |
		a' 1 ~  |
		a' 1  |
		R1*2  |
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
