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

		R1  |
		r2 a' 4 b'  |
		cis'' 2. b' 4  |
		a' 1  |
%% 5
		R1  |
		r4 cis'' b' a'  |
		b' 2. a' 4  |
		gis' 2. a' 4  |
		fis' 1 ~  |
%% 10
		fis' 2. a' 4  |
		gis' 1 ~  |
		gis' 2. e' 4  |
		fis' 2. e' 4  |
		gis' 2. e' 4  |
%% 15
		a' 2 b'  |
		cis'' 1  |
		d'' 1 ~  |
		d'' 1  |
		r4 e'' d'' cis''  |
%% 20
		d'' 8 cis'' 4 b' cis'' 8 b' 4  |
		a' 1  |
		R1  |
		gis' 1  |
		a' 2 b'  |
%% 25
		a' 1  |
		R1  |
		e'' 2. d'' 4  |
		cis'' 2 b'  |
		a' 1  |
%% 30
		R1  |
		gis' 1  |
		a' 2 b'  |
		a' 1  |
		R1  |
%% 35
		e'' 1  |
		d'' 1 ~  |
		d'' 1  |
		r4 e'' d'' cis''  |
		d'' 8 cis'' 4 b' cis'' 8 b' 4  |
%% 40
		a' 1  |
		fis' 1  |
		gis' 1  |
		a' 2 b'  |
		a' 1  |
%% 45
		b' 1  |
		e'' 2. d'' 4  |
		cis'' 2 b'  |
		a' 1  |
		fis' 1  |
%% 50
		gis' 1  |
		a' 2 b'  |
		cis'' 1  |
		d'' 1  |
		e'' 1  |
%% 55
		d'' 1 ~  |
		d'' 1  |
		cis'' 1 ~  |
		cis'' 1  |
		R1*2  |
		\bar "|."
	}
>>
