%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% writeLaTeX Example: A quick guide to LaTeX
%
% Source: Dave Richeson (divisbyzero.com), Dickinson College
% 
% A one-size-fits-all LaTeX cheat sheet. Kept to two pages, so it 
% can be printed (double-sided) on one piece of paper
% 
% Feel free to distribute this example, but please keep the referral
% to divisbyzero.com
% 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% How to use writeLaTeX: 
%
% You edit the source code here on the left, and the preview on the
% right shows you the result within a few seconds.
%
% Bookmark this page and share the URL with your co-authors. They can
% edit at the same time!
%
% You can upload figures, bibliographies, custom classes and
% styles using the files menu.
%
% If you're new to LaTeX, the wikibook is a great place to start:
% http://en.wikibooks.org/wiki/LaTeX
%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\documentclass[10pt,landscape,a4paper]{article}
\usepackage[utf8]{inputenc}
\usepackage[ngerman]{babel}
\usepackage[T1]{fontenc}
%\usepackage[LY1,T1]{fontenc}
%\usepackage{frutigernext}
%\usepackage[lf,minionint]{MinionPro}
\usepackage{tikz}
\usetikzlibrary{shapes,positioning,arrows,fit,calc,graphs,graphs.standard}
\usepackage[nosf]{kpfonts}
\usepackage[t1]{sourcesanspro}
\usepackage{multicol}
\usepackage{wrapfig}
\usepackage[top=0mm,bottom=1mm,left=0mm,right=1mm]{geometry}
\usepackage[framemethod=tikz]{mdframed}
\usepackage{microtype}
\usepackage{pdfpages}
\usepackage[dvipsnames]{xcolor}
\usepackage{minted}
\usemintedstyle{tango}
\usepackage[scale=0.9]{sourcecodepro}


\ifthenelse{\lengthtest { \paperwidth = 11in}}
    { \geometry{top=.5in,left=.5in,right=.5in,bottom=.5in} }
	{\ifthenelse{ \lengthtest{ \paperwidth = 297mm}}
		{\geometry{top=1cm,left=1cm,right=1cm,bottom=1cm} }
		{\geometry{top=1cm,left=1cm,right=1cm,bottom=1cm} }
	}
\pagestyle{empty}
\makeatletter % Author: https://tex.stackexchange.com/questions/218587/how-to-set-one-header-for-each-page-using-multicols
\renewcommand{\section}{\@startsection{section}{1}{0mm}%
                                {.2ex}%
                                {.2ex}%x
                                {\color{RoyalBlue}\sffamily\small\bfseries}}
\renewcommand{\subsection}{\@startsection{subsection}{1}{0mm}%
                                {.2ex}%
                                {.2ex}%x
                                {\sffamily\bfseries}}
\renewcommand{\subsubsection}{\@startsection{subsubsection}{3}{0mm}%
                                {-1ex plus -.5ex minus -.2ex}%
                                {1ex plus .2ex}%
                                {\normalfont\small\bfseries}}
\makeatother
\setcounter{secnumdepth}{0}
\setlength{\parindent}{0pt}
\setlength{\parskip}{0pt plus 0.5ex}
% -----------------------------------------------------------------------

\title{Quick Guide to LaTeX}

\begin{document}

\raggedright
\footnotesize

\begin{center}
     \Large{\textbf{A quick guide to \LaTeX}} \\
\end{center}
\begin{multicols}{3}
\setlength{\premulticols}{1pt}
\setlength{\postmulticols}{1pt}
\setlength{\multicolsep}{1pt}
\setlength{\columnsep}{2pt}

\section{Bubble Sort}

\begin{minted}[ tabsize=4]{c}
void bubble(int v[], int n)
{
	for(int i = 0; i<n-1; i++)
	{
		for(int j = 0; j<n-1-i; j++)
		{
			if(v[j] > v[j+1])
				swap(v[j], v[j+1]);
		}
	}
}
\end{minted}

\section{Insertion Sort}

\begin{minted}[tabsize=4]{c}
void insertion(int v[], int n)
{
	for(int i = 0; i<n; i++)
	{
		int key = v[i];
		int j = i-1;
		while(j>0 && v[j] > key)
		{
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = key;
	}
}
\end{minted}

\section{Selection Sort}

\begin{minted}[tabsize=4]{c}
void selection(int v[], int n)
{
	for(int i = 0; i<n; i++)
	{
		int k = i;
		int mini = v[i];
		for(int j = i; j<n; j++)
		{
			if(v[j] < mini)
			{
				mini = v[j];
				k = j;
			}
		}
		swap(v[i], v[k]);
	}
}
\end{minted}
\columnbreak
\section{Quick Sort}
`i` will look for an element greater than pivot.
\\
`j` will look for an element lesser than pivot.
\begin{minted}[tabsize=4]{c}
/* ------------------- QUICK SORT ------------------- */
int partition(int v[], int l, int h)
{
	int pivot = v[l];
	int i = l, j = h;
	do
	{
		do
		{
			i++;
		} while (v[i] <= pivot);

		do
		{
			j--;
		} while (v[j] > pivot);

		if (i < j)
			swap(v[i], v[j]);
	} while (i < j);

	swap(v[l], v[j]);

	return j;
}

void QuickSort(int v[], int l, int h)
{
	int j;
	if (l < h)
	{
		j = partition(v, l, h);
		QuickSort(v, l, j);
		QuickSort(v, j+1, h);
	}
}
/* ----------------- QUICK SORT ENDS ---------------- */
\end{minted}
\columnbreak
\section{Merge Sort}
\begin{minted}[ tabsize=4]{c}
/* ------------------- MERGE SORT ------------------- */
void merge(int v[], int l, int mid, int h)
{
	int i = l, j = mid + 1, k = l;
	int B[100];

	while (i <= mid && j <= h)
	{
		if (v[i] < v[j])
			B[k++] = v[i++];
		else
			B[k++] = v[j++];
	}

	for (; i <= mid; i++)
		B[k++] = v[i];
	for (; j <= h; j++)
		B[k++] = v[j];
	for (i = l; i <= h; i++)
		v[i] = B[i];
}

void MergeSort(int v[], int l, int h)
{
	int mid;
	if (l < h)
	{
		mid = (l + h) / 2;
		MergeSort(v, l, mid);
		MergeSort(v, mid + 1, h);
		merge(v, l, mid, h);
	}
}
/* ----------------- MERGE SORT ENDS ---------------- */
\end{minted}
\columnbreak
\section{Heap Sort}
% \vspace{-22mm}

\begin{minted}[tabsize=4]{c++}
/* -------------------- HEAP SORT ------------------- */
void heapify(int v[], int n, int i)
{
	int largest = i;
	int left = (2 * i) + 1; // as 0 based indexing
	int right = (2 * i) + 2;

	if (left < n && v[left] > v[largest])
		largest = left;

	if (right < n && v[right] > v[largest])
		largest = right;

	if (largest != i)
	{
		swap(v[largest], v[i]);
		// Recursively heapify the affected sub-tree
		heapify(v, n, largest);
	}
}
void HeapSort(int v[], int n)
{
	//Build Heap (rearrange array)
	for(int i = (n/2) -1 ; i>= 0; i--)
		heapify(v, n, i);
	
	// One by one extract an element from heap
	for(int i = n-1; i>0; i--)
	{
		// move root to end
		int temp = v[0];
		v[0] = v[i];
		v[i] = temp;

		// call max heapify on the reduced heap
		heapify(v, i, 0);
	}
}
/* -------------------------------------------------- */
\end{minted}
\columnbreak
\section{Heap Sort 2}
\begin{minted}[tabsize=4]{c++}
int Delete(int v[], int n)
{
	int x = v[0];
	v[0] = v[n - 1];

	int i = 0;
	int j = 2 * i + 1; // left child

	while (j < n - 1)
	{
		if (v[j + 1] > v[j])
			j = j + 1;

		if (v[j] > v[i])
		{
			swap(v[i], v[j]);
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
	return x;
}

void heapify(int v[], int n)
{
	for (int i = (n / 2) - 1; i >= 0; i--)
	{
		int j = 2 * i + 1; // left child
		while (j < n - 1)
		{
			// compare left and right children
			if (v[j + 1] > v[j])
				j = j + 1;

			// compare root and largest child
			if (v[j] > v[i])
			{
				swap(v[i], v[j]);
				i = j;
				j = 2 * i + 1;
			}
			else
				break;
		}
	}
}
\end{minted}

\end{multicols}

\end{document}
