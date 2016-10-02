
New-Item -ItemType Directory -Force -Path temp
New-Item -ItemType Directory -Force -Path build/doc
# latex -aux-directory=temp -include-directory=doc/fractallanguage/ -output-directory=build/doc doc/fractallanguage/main.tex
# latex -aux-directory=temp -include-directory=doc/fractallanguage/ -output-directory=build/doc doc/fractallanguage/main.tex
# latex -aux-directory=temp -include-directory=doc/fractallanguage/ -output-directory=build/doc doc/fractallanguage/main.tex
# dvips.exe -o build/doc/main.ps build/doc/main.dvi
# ps2pdf.exe build/doc/main.ps
# dvipdfm.exe build/doc/main.dvi
pdflatex -aux-directory=temp -shell-escape -include-directory=doc/fractallanguage/ -output-directory=build/doc doc/fractallanguage/main.tex
pdflatex -aux-directory=temp -shell-escape -include-directory=doc/fractallanguage/ -output-directory=build/doc doc/fractallanguage/main.tex
pdflatex -aux-directory=temp -shell-escape -include-directory=doc/fractallanguage/ -output-directory=build/doc doc/fractallanguage/main.tex


