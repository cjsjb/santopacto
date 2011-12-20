\context Staff = "violín" <<
	\set Staff.instrumentName = "Violín"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 2" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \major
		r2 r4 a' 8 b'  |
		cis'' 4. b' 8 a' 2 ~  |
		a' 2 r8 cis'' b' a'  |
		b' 4. a' 8 gis' 4. a' 8  |
%% 5
		fis' 2 ~ fis' 4. a' 8  |
		gis' 2 ~ gis' 4. e' 8  |
		fis' 4. e' 8 gis' 4. e' 8  |
		a' 4 b' cis'' 2  |
		d'' 1  |
%% 10
		r8 e'' d'' cis'' d'' 16 cis'' 8 b' cis'' 16 b' 8  |
		\time 2/4
		gis' 8 a' 4.  |
		b' 2  |
		e'' 4. d'' 8  |
		cis'' 4 d'' 8 e''  |
%% 15
		fis'' 2 ~  |
		fis'' 2  |
		e'' 4. d'' 8  |
		cis'' 4 b'  |
		a' 2  |
%% 20
		b' 2  |
		gis' 2  |
		a' 4 b'  |
		cis'' 2  |
		d'' 2  |
%% 25
		e'' 2  |
		d'' 2 ~  |
		d'' 2  |
		r8 e'' d'' cis''  |
		d'' 16 cis'' 8 b' cis'' 16 b' 8  |
%% 30
		gis' 8 a' 4.  |
		b' 2  |
		e'' 4. d'' 8  |
		cis'' 4 d'' 8 e''  |
		fis'' 2 ~  |
%% 35
		fis'' 2  |
		e'' 4. d'' 8  |
		cis'' 4 b'  |
		a' 2  |
		b' 2  |
%% 40
		gis' 2  |
		a' 4 b'  |
		cis'' 2  |
		d'' 2  |
		e'' 2  |
%% 45
		d'' 2 ~  |
		d'' 2  |
		cis'' 2 ~  |
		cis'' 4. b' 8  |
		a' 2 ~  |
%% 50
		a' 2  |
		R2*3  |
		\bar "|."
	} % Voice
>> % Staff
