%\usepackage{euler}
\usepackage{amssymb,amsmath,amsthm}
\usepackage{bm,url,graphics,subfigure,epsfig,rotating,float,eufrak}
\usepackage{ulem}
\usepackage{color,soul,xcolor,exercise,appendix}
\usepackage{tikz}
%\usepackage{mathrsfs}
\usepackage[mathscr]{euscript}
%\usepackage{showlabels}
\usepackage{dialogue}
\def \ohat {\hat{\omega}}
\def \vhat {\hat{v}}
\def \gdot {\dot{\gamma}}
\def \fj    {f^{\rm j}}
\def \ffj   {{\bm f}^{\rm j}}
\def \rrj  {{\bm r}^{\rm j}}
\def \rrs  {{\bm r}^{\rm s}}
\def \rrz  {{\bm r}^{\rm 0}}
\def \ltwo {\Delta_{\perp}}
\def \psiS {\psi^{\rm stokeslet}}
\def \vvS  {{\bm v}^{\rm stokeslet}}
\def \pS  {p^{\rm stokeslet}}
\def \vS   {v^{\rm stokeslet}}
\def \Ppsi {\bm{\Psi}}
\def \xtd {\tilde{x}}
\def \ytd {\tilde{y}}
\def \ztd {\tilde{z}}
\def \ttd {\tilde{t}}
\def \LL {{\bm L}}
\def \ynot {y_{\rm 0}}
\def \dL {d\bm{\ell}}
\def \PP {\bm{P}}
\def \pzero {p_{\rm 0}}
\def \aa {\bm{a}}
\def \CC {\bm{C}}
\def \ggg {\bm{g}}
\def \gram {\rm gm}
\def \cm   {\rm cm}
\def \kg   {\rm kg}
\def \meter {\rm m}
\def \sec {\rm s}
\def \Oa {\Omega_{\rm a}}
\def \Ob {\Omega_{\rm b}}
\def \nhat {\hat{n}}
\def \that {\hat{t}}
\def \dd {\bm{d}}
\def \kB {k_{\rm B}}
\def \FF {\bm{F}}
\def \OM {\bm{\Omega}}
\def \ua {u_{\alpha}}
\def \rr {\bm{r}}
\def \rnot {\bm{r}^{\rm 0}}
\def \xnot {x_{\rm 0}}
\def \xxnot {{\bm x}_{\rm 0}}
\def \VV {\bm{V}}
\def \xhat {\hat{x}}
\def \yhat {\hat{y}}
\def \zhat {\hat{z}}
\def \duxdx {\frac{\partial u_1}{\partial x}}
\def \duxdy {\frac{\partial u_1}{\partial y}}
\def \duxdz {\frac{\partial u_1}{\partial z}}
\def \duydx {\frac{\partial u_2}{\partial x}}
\def \duydy {\frac{\partial u_2}{\partial y}}
\def \duydz {\frac{\partial u_2}{\partial z}}
\def \duzdx {\frac{\partial u_3}{\partial x}}
\def \duzdy {\frac{\partial u_3}{\partial y}}
\def \duzdz {\frac{\partial u_3}{\partial z}}
\def \Ap {A^{\prime}}
\def \Bp {B^{\prime}}
\def \ff {{\bm f}}
\newcommand{\eee}{\hat{\bm e}}
\def \fh {\tilde{{\bm f}}}
\def \tprime {t^{\prime}}
\def \etad {\eta_{\rm t}}
%\def \kpeak {k^{\rm pk}}
%AB: I must admit that I didn't realise that pk means peak until I saw this!
\def \kpeak {k_{\rm peak}}
\def \gd {\gamma_{\rm d}}
\def \gaO {\gamma_{\rm \alpha S}}
\def \xx {{\bm x}}
\def \kk {{\bm k}}
\def \ii {{\rm i}}
\def \wf {w_{\rm f}}
\def \erf {{\rm erf}}
\def \smax {\sigma_{\rm max}}
%\newcommand{\RRRR}{\mathsf R}
%AB: this didn't do the job
\newcommand{\RRRR}{\mbox{\boldmath ${\sf R}$} {}}
\def \axx {\alpha_{xx}}
\def \axy {\alpha_{xy}}
\def \ayx {\alpha_{yx}}
\def \ayy {\alpha_{yy}}
\def \delz {\partial_{z}}
\def \del2z {\partial^{2}_{z}}
\def \Bx { \bar{B}_x }
\def \By {\bar{B}_{y}}
\def \Bbx {\langle \bar{B}_x \rangle}
\def \Bby {\langle  \bar{B}_{y} \rangle}
\def \BBb {\langle  \bar{\bm{B}} \rangle}
\def \BBh {\hat{\bm{B}}}
\def \Bhx {B^{\rm h}_{x}}
\def \Bhy {B^{\rm h}_{y}}
\def \Bhxcc {\hat{B}^{\ast}_{x}}
\def \Bhycc {\hat{B}^{\ast}_{y}}
\def \bhxx {{\hat B}_x {\hat B}^{\ast}_x }
\def \bhyy {{\hat B}_y {\hat B}^{\ast}_y }
\def \bhxy {{\hat B}_x {\hat B}^{\ast}_y }
\def \bhyx {{\hat B}_x^{\ast} {\hat B}_y }
\def \Bhxx {\langle {\hat B}_x {\hat B}^{\ast}_x \rangle}
\def \Bhyy {\langle  {\hat B}_y {\hat B}^{\ast}_y \rangle}
\def \Bhxy {\langle  {\hat B}_x {\hat B}^{\ast}_y \rangle}
\def \Bhyx {\langle  {\hat B}_x^{\ast} {\hat B}_y \rangle}
\def \etaxx {\eta_{xx}}
\def \etaxy {\eta_{xy}}
\def \etayx {\eta_{yx}}
\def \etayy {\eta_{yy}}
\def \ksqr {k^{2}}
\def \uxt {{\bm U}({\bm x},t)}
\def \vamp { v_{\rm amp}}
\def \vsurf { v_{\rm surf}}
\def \Bbar {{\overline {\bm B}}}
\def \Abar {{\overline {\bm A}}}
\def \Jbar {{\overline {\bm J}}}
\def \Bxt {{\bm B}({\bm x},t)}
\def \Bhkt {{\hat{\bm B}}({\bm k},t)}
\def \Bh {{\hat{\bm B}}}
\def \Beq {B_{\rm eq}}
\def \Beqz {B^0_{\rm eq}}
\def \Axt {{\bm A}({\bm x},t)}
\def \A {{\bm A}}
\def \Ar {A_r}
\def \At {A_{\theta}}
\def \fxt {{\bm f}({\bm x},t)}
\def \f {{\bm f}}
\def \mr {\rcurs}
\def \pp {\bm{p}}

\def \hcurly {\left\{\cdots\right\}}
\def \hparen {\left(\cdots\right)}
\def \hsqr {\left[\cdots\right]}
\def \atob {\alpha\to\beta}
\def \btoa {\beta\to\alpha}
\def \da {\partial_{\alpha}}
\def \db {\partial_{\beta}}
\def \dbb {\partial^2_{\beta\beta}}
\def \daa {\partial^2_{\alpha\alpha}}
\def \xaj  {x_{\alpha}^{\rm j}}
\def \xbj  {x_{\beta}^{\rm j}}
\def \xas  {x_{\alpha}^{\rm s}}
\def \xbs  {x_{\beta}^{\rm s}}
\def \xa  {x_{\alpha}}
\def \xb  {x_{\beta}}
\def \xm  {x_{\mu}}
\def \xn  {x_{\nu}}
\def \VF  {V_{\rm F}}
\def \VS  {V_{\rm S}}
\def \Szab {S^{\rm 0}_{\alpha\beta}}
\def \xl  {x_{\lambda}}
\def \dab {\delta_{\alpha\beta}}
\def \dmn {\delta_{\mu\nu}}
\def \mn  {\mu\nu}
\def \ab {\alpha\beta}
\def \abc {\alpha\beta\gamma}
\def \mU {\mathcal{U}}
\def \vz {v^{\rm 0}}
\def \vvz {\bm{v}^{\rm 0}}
\def \Sz  {S^{\rm 0}}
\def \ww  {\bm{w}}
\def \va {v_{\alpha}}
\def \vb {v_{\beta}}
\def \ua {u_{\alpha}}
\def \ub {u_{\beta}}
\def \rzero {r_0}
\def \AA {\bm{A}}
\def \AAp {\bm{A}^{\prime}}
\def \ww {{\bm w}}
\def \WW {{\bm W}}
\def \uu {{\bm u}}
\def \vv {{\bm v}}
\def \vvtd {\tilde{\bm v}}
\def \UU {{\bm U}}
\def \oo {{\bm \omega}}
\def \ootd {\tilde{{\bm \omega}}}
\def \Wbar {{\overline {\bm W}}}
\def \Ubar {{\overline {\bm U}}}
\def \Uwind {{\bm U}^{\rm wind}}
\def \Ucirc {{\bm U}^{\rm circ}}
\def \Ushear {{\bm U}^{\rm shear}}
\def \ubar {{\overline U}}
\def \ut {U_{\theta}}
\def \up {U_{\phi}}
\def \B {{\bm B}}
\def \Br {B_r}
\def \Bt {B_{\theta}}
\def \jxt {{\bm J}({\bm x},t)}
\def \JJ {{\bm J}}
\def \HH {\bm{H}}
%\def \SSSS {{\sf S}}
\newcommand{\SSSS}{\mbox{\boldmath ${\sf S}$} {}}
\def \k {{\bm k}}
\def \x {{\bm x}}
\def \grav {{\bm g}}
\def \grad {{\bm \nabla}}
\def \curl {{\bm \nabla} \times}
\def \tdpartial {\tilde{\partial}}
\def \tdcurl {\tilde{{\bm \nabla}} \times}
\def \dive {{\bm \nabla}\cdot}
\def \lap {\nabla^2}
\def \tdlap {\tilde{\nabla}^2}
\def \delt {\partial_t}
\def \Dt {D_t}
\def \rhat {\hat{r}}
\def \zhat {\hat{z}}
\def \phat {\hat{\phi}}
\def \ex {{\bm e}_x}
\def \ey {{\bm e}_y}
\def \er {{\hat e}_r}
\def \et {{\hat e}_{\theta}}
\def \ep {{\hat e}_{\phi}}
\def \eone {\hat{e}_1}
\def \etwo {\hat{e}_2}
\def \ethree {\hat{e}_3}
\def \t  {\theta}
\def \p  {\phi}
\def \ehr {{\bm e}_{\hat r}}
\def \eht {{\bm e}_{\hat \theta}}
\def \ehp {{\bm e}_{\hat \phi}}
\newcommand{\fder}[2]{\frac{\delta #1}{\delta #2}}
\newcommand{\fdertxt}[2]{\delta (#1)/\delta #2}
\newcommand{\eq}[1]{(\ref{#1})}
\newcommand{\EEq}[1]{Equation~(\ref{#1})}
\newcommand{\Eq}[1]{Equation~(\ref{#1})}
\newcommand{\Eqs}[2]{Equations~(\ref{#1}) and~(\ref{#2})}
\newcommand{\Eqss}[2]{Equations~(\ref{#1})--(\ref{#2})}
\newcommand{\eqs}[2]{(\ref{#1}) and~(\ref{#2})}
\newcommand{\bra}[1]{\left\langle #1\right\rangle}
\newcommand{\brah}[1]{\left\langle #1\right\rangle_{xy}}
\newcommand{\braf}[1]{\left\langle #1\right\rangle_{\kappa=5}}
\newcommand{\meanBB}{\overline{\mbox{\boldmath $B$}}{}}{}
\def \pphi {\bm{\phi}}
\def \Rm  {\mbox{Re}_{\rm M}}
\def \Dy  {\mbox{Dy}}
\def \Rey  {\mbox{Re}}
\def \omc  {\omega_{\rm c}}
\def \Tl  {T_{\rm L}}
\def \Tto  {\tau_{\rm to}}
\def \Teta  {\tau_{\rm td}}
\def \Tac {\tau_{\rm ac}}
\def \kf  {k_{\rm f}}
%\def \kone  {\k_{\rm 1}}
%AB: should not be bold, I guess
\def \kone  {k_{\rm 1}}
\def \urms  {u_{\rm rms}}
\def \lr  {L_{\rm r}}
\def \lt  {L_{\theta}}
\def \lp  {L_{\phi}}
\def \Hrho {H_{\rho}}
\def \Hm {H_{\rm M}}
\def \BB {\bm B}
\def \B {\bm B}
\def \Br {{\bm B}^{\rm ref}}
\def \A {\bm A}
\def \Ar {{\bm A}^{\rm ref}}
\def \curl {{\bm \nabla}\times}
\def \Urms {U_{\rm rms}}
\def \etat {\eta_{\rm t}}
\def \etatz {\eta^0_{\rm t}}
\def \Tf {T_{\rm f}}
\def \Rm  {\mbox{Re}_{\rm M}}
\def \Pm  {\mbox{Pr}_{\rm M}}
\def \cs  {c_{\rm s}}
\def \kf  {k_{\rm f}}
\def \EK  {E_{\rm K}}
\def \EL  {E_{\rm L}}
\def \EM  {E_{\rm M}}
\def \kgm  {k_{\rm gm}}
\def \tl {\tau_{\rm L}}
%AB: what should this be? large-scale turnover time
\def \lf {L_{\rm f}}
\def \mus {\mu_{\ast}}
\def \urms {u_{\rm rms}}
\def \Ek {E_{\rm K}}
\def \Em {E_{\rm M}}
\def \El {E_{\rm L}}
\def \Hk {H_{\rm K}}
\def \BB {\bm B}
\def \ssab {\sigma_{\alpha\beta}}
\def \alpk {\alpha_{\rm K}}
\def \alpm {\alpha_{\rm M}}
\def \tauc {\tau_{\rm c}}
 \def \ca {C_{\alpha}}
 \def \a {{\alpha_0}}
\def \nuas {\left(\frac{\nu}{\sqrt{\a S}}\right)}
\def \cP {\mathcal{P}}
\def \imag {\mathbb{I} }
\def\onethird{{\textstyle{1\over3}}}
\def \fhalf  {\frac{1}{2}}
\def \KE {\mathcal{E}_{\rm K}}
\def \ME {E_{\rm M}}
\def \Kh {E^{\rm h}_{\rm K}}
\def \Mh {E^{\rm h}_{\rm M}}
\def \HKh {H^{\rm h}_{\rm K}}
\def \half {{\textstyle{1\over2}}}
\def \FF {\bm{F}}
\def\rcurs{{\mbox{$\resizebox{.16in}{.08in}{\includegraphics{figures/ScriptR}}$}}}
\def\brcurs{{\mbox{$\resizebox{.16in}{.08in}{\includegraphics{figures/BoldR}}$}}}
\def\hrcurs{{\mbox{$\hat \brcurs$}}}
%\newcommand{\fig}[1]{fig.~\ref{#1}}
%\newcommand{\subfig}[2]{fig.~\ref{#1}(#2)}
%AB: upper case
\newcommand{\fig}[1]{Fig.~\ref{#1}}
\newcommand{\subfig}[2]{Fig.~\ref{#1}(#2)}
\newcommand{\Fig}[1]{Figure.~\ref{#1}}
\newcommand{\pd}{\partial}
\newcommand{\ADD}[1]{\textcolor{blue}{#1}}
\newcommand{\COMMENT}[1]{\textcolor{green}{#1}}
\newcommand{\DEL}[1]{\textcolor{red}{\sout{#1}}}
\newtheorem{thm}{}
\newtheorem*{thm-non}{Theorem}
\newtheorem*{def-non}{Definition}
\newtheorem*{gcon}{Global Conservation Law}
\newtheorem*{lcon}{Local Conservation Law}
%\newif\iffigs
%\figspng
%\figsps
%\iffigs
%\fi
\def\drawing #1 #2 #3 {
\begin{center}
\setlength{\unitlength}{1mm}
\begin{picture}(#1,#2)(0,0)
\put(0,0){\framebox(#1,#2){#3}}
\end{picture}
\end{center} }
\setcounter{secnumdepth}{2}
\setcounter{tocdepth}{2}
\titleformat{\chapter}%
  {\huge\rmfamily\itshape\color{black}}% format applied to label+text
  {\llap{\colorbox{black}{\parbox{1.5cm}{\hfill\itshape\huge\color{white}\thechapter}}}}% label
  {2pt}% horizontal separation between label and title body
  {}% before the title body
  []% after the title body
\definecolor{copper}{cmyk}{0,0.9,0.9,0.2}
\colorlet{lightgray}{black!25}
\colorlet{darkgray}{black!75}
\def \prl {Phys. Rev. Lett.}
