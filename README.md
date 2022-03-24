# UNIFEI-IESTI01-TinyML-2022.1
## TinyML - Machine Learning for Embedding Devices
**2022 - 1st Semester**

<img src='images/IESTI_2.jpg'/>
<figcaption><a href='https://unifei.edu.br/iesti/'>Instituto de Engenharia de Sistemas e Tecnologias da Informação – IESTI - Campus de Itajubá</a></figcaption>
<hr>

For the previous versions of IESTI01 courses, please visit: 
+ [1st Semester 2021 - UNIFEI-IESTI01-TinyML-2021.1](https://github.com/Mjrovai/UNIFEI-IESTI01-T01-2021.1)
+ [2nd Semester 2021 - UNIFEI-IESTI01-TinyML-2021.2](https://github.com/Mjrovai/UNIFEI-IESTI01-TinyML-2021.2)
<hr>

## Material 
- All material will be uploaded to this repo at the classes' base
  - Slides, Noteboooks, Code and Docs in English 
  - Videos in Portuguese

### Optional pre-course activities:
+ Pre-course:  : [[Suggested readings]](https://github.com/Mjrovai/UNIFEI-IESTI01-T01-2021.1/tree/main/00_Curso_Folder/0_Pre-Course)
+ Pre-course:  : [[Jupyter Notebook, CoLab and Python Review]](https://github.com/Mjrovai/UNIFEI-IESTI01-T01-2021.1/tree/main/00_Curso_Folder/1_Fundamentals/Class_4)

### Parte 1: Fundamentals 
+ Class 1 - About the Course and Syllabus
+ Class 2 - Introduction to TinyML
+ Class 3 - TinyML - Challenges 
+ Class 4 - Jupyter Notebook, CoLab and Python Review 
+ Class 5 - The Machine Learning Paradigm 
+ Class 6 - The Building Blocks of Deep Learning (DL) - Introduction 
+ Class 7 - The Building Blocks of DL - Regression with DSS 
+ Class 8 - The Building Blocks of DL - Classification with DSS 
+ Class 9 - The Building Blocks of DL - DNN Recap, Datasets and Model Performance Metrics 
+ Class 10 - Introducing Convolutions (CNN) 
+ Class 11 - Image Classification using CNN 
+ Class 12 - Introduction to Edge Impulse – CNN with Cifar-10 
+ Class 13 - Preventing Overfitting 
+ Class 14 - Fundamentals wrap-up and Application’s preview 
  
### Parte 2: Applications & Deploy
+ Class 15 - ML Applications Overview - AI Lifecycle and ML Workflow 
+ Class 16 - Introduction to TFLite and TFLite-Micro 
  + Class 16a - EdgeML with TensorFlow Lite (RaspberryPi Demo)
+ Class 17 - TinyML Kit Overview - HW and SW Installation & Test 
+ Class 18 - TFLite-Micro Overview & Hello World Code Walkthrough
+ Class 19 - Motion Classification - Introdution
+ Class 20 -  Motion Classification using MCU 
+ Class 21 - Lecturer with an Industry Expert 
+ Class 22 - Anomaly Detection using MCU 
+ Class 23 - Keyword Spotting - Introduction 
+ Class 24 - Lab KWS using MCU 
+ Class 25 - Collecting Data with Edge Impulse Studio 
+ Class 26 - Visual Wake Words (VWW) - Introduction 
  +  Class 26a - Person Detection (VWW) - Application 
+ Class 27 - Image Classification using Edge Impulse Studio 
+ Class 28 - Responsible AI & Course Wrap-up 
+ Class 29 and 30 - Group Presentations

### Group Projects
+ Proposals
+ Final Reports

<hr>

## Relevancia do aprendizado do TinyML
Como sabemos, os microcontroladores (ou MCUs) são componentes eletrônicos muito baratos, geralmente com apenas alguns kilobytes de RAM e projetados para consumir pequenas quantidades de energia. Hoje em dia, os MCUs podem ser encontrados incorporados em quase todos os dispositivos residenciais, médicos, automotivos e industriais. Estima-se que mais de 40 bilhões de microcontroladores serão vendidos este ano e provavelmente centenas de bilhões deles esteja em serviço atualmente. Mas, curiosamente, esses dispositivos não recebem muita atenção porque muitas vezes são usados apenas para substituir funcionalidades que os sistemas eletromecânicos mais antigos faziam em carros, máquinas de lavar ou controles remotos.

Mais recentemente, com a era da IoT (Internet das Coisas), uma parte significativa desses MCUs está gerando “quintilhões” de dados, que em sua maioria, não são utilizados devido ao alto custo e complexidade de sua transmissão de dados (largura de banda e latência).

Por outro lado, nas últimas décadas, assistimos ao desenvolvimento de modelos de Aprendizado de Máquina (também conhecido como Inteligência Artificial) treinados com "toneladas" de dados e em poderosos mainframes. Mas o que está acontecendo hoje é que, de repente, tornou-se possível, à partir de sinais "ruidosos" e complexos como imagens, áudio ou acelerômetros e extrair significado deles através do uso de redes neurais. E o que é mais importante, é que podemos executar esses modelos de redes neurais em microcontroladores e sensores usando muito pouca energia e assim, interpretando muito mais dos dados de sensores que estamos atualmente ignorando. Este é o TinyML, uma nova área que permite extrair "inteligência de máquina" bem no mundo físico (onde os dados são gerados).

## Visão geral do curso

TinyML é um curso introdutório na interseção entre o Aprendizado de Máquina (Machine Learning) e dispositivos embarcados (Embedded Devices). A difusão de dispositivos embarcados com ultra-baixo consumo de energia (da ordem de miliwatts), juntamente com a introdução de frameworks de aprendizado de máquina dedicados a dispositivos embarcados, como TensorFlow Lite para Microcontroladores (TF Lite Micro), permitirão a proliferação em massa de dispositivos IoT potencializados por IA (“AioT”). 

O crescimento explosivo do aprendizado de máquina e a facilidade de uso de plataformas como TensorFlow (TF) o tornam um tópico de estudo indispensável para estudantes de Engenharia Eletrônica, da Computação e Controle & Automação. 

O TinyML difere do aprendizado de máquina convencional (por exemplo, servidor - nuvem) porque requer não apenas conhecimentos em software, mas também conhecimentos em hardware integrado. Este curso procura fornecer uma base para o entendimento deste campo emergente.

## Referências
A atual versão deste curso, pioneiro na América Latina, tem como principais referências:
+ [Harvard School of Engineering and Applied Sciences - CS249r: Tiny Machine Learning](https://sites.google.com/g.harvard.edu/tinyml/home)
+ [Professional Certificate in Tiny Machine Learning (TinyML) – edX/Harvard](https://www.edx.org/professional-certificate/harvardx-tiny-machine-learning)
+ [Introduction to Embedded Machine Learning - Coursera/Edge Impulse](https://www.coursera.org/learn/introduction-to-embedded-machine-learning)
+ [Computer Vision with Embedded Machine Learning - Coursera/Edge Impulse](https://www.coursera.org/learn/computer-vision-with-embedded-machine-learning)
+ Fundamentals text book: ["Deep Learning with Python" by François Chollet](https://www.manning.com/books/deep-learning-with-python)
+ Applications & Deploy text book: ["TinyML" by Pete Warden, Daniel Situnayake](https://www.oreilly.com/library/view/tinyml/9781492052036/)
+ Deploy Text Book ["TinyML Cookbook" by Gian Marco Iodice](https://github.com/PacktPublishing/TinyML-Cookbook)

IESTI01 faz parte do [TinyML4D](https://tinyml.seas.harvard.edu/), uma iniciativa para tornar a ensino do TinyML disponível para todos em todo o mundo.

## Tópicos do curso

+	Fundamentos de IoT
+	Fundamentos de aprendizado de máquina (ML)
+	Fundamentos de Deep Learning (DL)
+	Como coletar dados para ML
+	Como treinar e implantar modelos de ML
+	Noções básicas sobre ML embarcado
+	O código por trás de alguns dos aplicativos mais amplamente utilizados no TinyML
+	Casos reais de aplicação do TinyML na indústria
+	Princípios de reconhecimento automático de fala (KeyWord Spotting apps como Alexa, Hey Google, Siri, etc.)
+	Princípios do classificação automática de imagens (Visual Wake Words)
+	Conceito de detecção de anomalias e modelos de ML aplicáveis 
+	Princípios de Engenharia de Dados aplicado ao TinyML
+	Visão geral do hardware de dispositivos baseados em microcontroladores
+	Visão geral do software por trás de dispositivos baseados em microcontroladores
+	Projetos reais utilizando plataformas de mercado
+	Design, desenvolvimento e Implantação de uma IA responsável

## Carga horária: 
+	30hs (Classes de 2hs, durante 15 semanas) 
+	15hs de tarefas/labs
+	15hs em pesquisas e estudos individuais + trabalho final (em grupo)

## Processo de aprovação:
+ Participação individual em classe (Quiz semanal): 20%
+	Code Assignments (ML/DL) (Jupyter Notebook / CoLab): 25%
+	Projetos práticos (Relatórios de Laboratórios): 25%
+	Projeto Final em Grupo(com apresentação): 30%

## Pré-requisitos
+ Conhecimentos do idioma inglês (leitura).
+ Conhecimentos básicos de programação em  C/C++ (Arduino IDE) e Python. Todas as tarefas de classe envolverão uma ou ambas linguagens de programação.
+ Familiaridade com ferramentas de linha de comando em Mac, Windows ou Linux. Os projetos exigirão algumas operações em um terminal.
+ Noções de Algebra linear, análise de sinais, probabilidade básica e estatística. Muitos tópicos de ML giram em torno de compreender operações e notação de vetores e matrizes, bem como conceitos de distribuições gaussianas, médias, desvios-padrão etc.

## Metodologia/Recursos: 
+ As aulas serão ministradas de maneira remota e ao vivo (aulas síncronas) pela plataforma Google Meet, todas as quartas-feiras das 13:30h às 15:30h (horário de Brasília). As gravações das aulas estarão disponíveis aos alunos para revisão. 
+ Exercícios e projetos poderão ser desenvolvidos em computadores pessoais com TensorFlow V.2x instalados ou utilizando-se de ferramentas on-line como [Google CoLab](https://colab.research.google.com/notebooks/intro.ipynb).
+ Modelos reais de TinyML serão desenvolvidos e treinados utilizando-se do [Edge Impulse Studio](https://www.edgeimpulse.com/).
+ Para a captura inicial de dados, deployment dos modelos treinados e familiarização das ferramentas de mercado, serão utilizados inicialmante smart-phones pessoais dotados de pelo menos sensores do tipo: acelerômetro, microfone e camera.
+ Na segunda parte do curso será utilizado um [Kit](https://store-usa.arduino.cc/products/arduino-tiny-machine-learning-kit) composto de um Arduino BLE Sense (Cortex-M4) e uma camera digital modelo OV7675 (Cada aluno receberá um Kit, disponibilizado pela universidade para seu uso pessoal durante o decorrer do curso). 

## Professor do curso:
+ [Marcelo José Rovai](http://lattes.cnpq.br/4234592863079468)

## Supervisão e apoio:
+ [José Alberto Ferreira](http://lattes.cnpq.br/8319509175327154)

