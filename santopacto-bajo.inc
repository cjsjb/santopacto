\context Staff = "bajo" <<
	\set Staff.instrumentName = "Bajo"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voice 1" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "bass_8"
		\key a \major
		a,, 4 r8 a,, 16 r a,, 4. r8  |
		a,, 4 r8 a,, 16 r a,, 4. r8  |
		a,, 4 r8 a,, 16 r a,, 4. r8  |
		cis, 4 r8 cis, 16 r cis, 4. r8  |
%% 5
		fis,, 4 r8 fis,, 16 r fis,, 4. r8  |
		cis, 4 r8 cis, 16 r cis, 4. r8  |
		d, 4 r8 d, 16 r e, 4. r8  |
		a,, 4 gis,, fis,, 4. fis,, 16 r  |
		d, 4 r8 d, 16 r d, 4. r8  |
%% 10
		e, 4 r8 e, b,, 16 e, gis, b, 8 a, 16 gis, 8  |
		\time 2/4
		fis, 16 r fis, 8 r16 a, fis, cis,  |
		b,, 16 r b,, 4 r16 b,,  |
		e,, 16 r e,, 4 r16 e,,  |
		a,, 8 a,, 16 r gis,, 4  |
%% 15
		fis,, 16 r fis,, 4 r16 fis,,  |
		b,, 16 r b,, 4 r16 b,,  |
		e,, 16 r e,, 4 r16 e,,  |
		a,, 8. r16 gis,, a,, gis,, 8  |
		fis,, 16 r fis,, 4 r16 fis,,  |
%% 20
		b,, 16 r b,, 4 r16 b,,  |
		e,, 16 r e,, 4 r16 e,,  |
		a,, 4 cis, 8 e,  |
		fis, 4. r16 fis,  |
		b,, 16 r b,, 4 r16 b,,  |
%% 25
		e,, 16 r e,, 4 r16 e,,  |
		d, 16 r d, 8 r16 d, a,, 8  |
		d, 4 r8 d, 16 r  |
		e, 8 e, 4 e, 8  |
		b,, 16 e, gis, b, 8 a, 16 gis, 8  |
%% 30
		fis, 16 r fis, 8 r16 a, fis, cis,  |
		b,, 16 r b,, 4 r16 b,,  |
		e,, 16 r e,, 4 r16 e,,  |
		a,, 8 a,, 16 r gis,, 4  |
		fis,, 16 r fis,, 4 r16 fis,,  |
%% 35
		b,, 16 r b,, 4 r16 b,,  |
		e,, 16 r e,, 4 r16 e,,  |
		a,, 8. r16 gis,, a,, gis,, 8  |
		fis,, 16 r fis,, 4 r16 fis,,  |
		b,, 16 r b,, 4 r16 b,,  |
%% 40
		e,, 16 r e,, 4 r16 e,,  |
		a,, 4 cis, 8 e,  |
		fis, 4. r16 fis,  |
		b,, 16 r b,, 4 r16 b,,  |
		e,, 16 r e,, 4 r16 e,,  |
%% 45
		d, 16 r d, 8 r16 d, a,, 8  |
		d, 8. e, d, 8  |
		a,, 4 r8 a,, 16 r  |
		d, 8. e, d, 8  |
		a,, 4 r8 a,, 16 r  |
%% 50
		d, 8. e, fis, 8  |
		a, 2  |
		R2*2  |
		\bar "|."
	} % Voice
>> % Staff
