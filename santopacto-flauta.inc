\context Staff = "track 8, Flauta" <<
	\set Staff.instrumentName = "Flauta"
	\set Staff.shortInstrumentName = "F."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 4" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key a \major
		R1*2  |
		r2 r8 cis'' b' a'  |
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
		a' 2  |
		R2  |
		gis' 2  |
		a' 4 b'  |
%% 15
		a' 2  |
		R2  |
		e'' 4. d'' 8  |
		cis'' 4 b'  |
		a' 2  |
%% 20
		R2  |
		gis' 2  |
		a' 4 b'  |
		a' 2  |
		R2  |
%% 25
		e'' 2  |
		d'' 2 ~  |
		d'' 2  |
		r8 e'' d'' cis''  |
		d'' 16 cis'' 8 b' cis'' 16 b' 8  |
%% 30
		a' 2  |
		R2  |
		gis' 2  |
		a' 4 b'  |
		a' 2  |
%% 35
		R2  |
		e'' 4. d'' 8  |
		cis'' 4 b'  |
		a' 2  |
		R2  |
%% 40
		gis' 2  |
		a' 4 b'  |
		a' 2  |
		R2  |
		e'' 2  |
%% 45
		d'' 2 ~  |
		d'' 2  |
		cis'' 2  |
		R2*6  |
		\bar "|."
	}
>>
