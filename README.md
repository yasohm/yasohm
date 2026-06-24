<div align="center">

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:0D1117,40:0a0e1a,100:00D9FF&height=130&section=header&text=YASSIN%20BENHAIDA&fontSize=44&fontColor=FFFFFF&fontAlignY=68&animation=fadeIn&desc=Developer%20%7C%20Security%20Researcher%20%7C%20AI%20Engineer&descSize=16&descAlignY=85&descAlign=50" />

<br/>

<img src="https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=700&size=18&pause=1200&color=00D9FF&center=true&vCenter=true&width=680&lines=Full-Stack+Application+Developer+%F0%9F%87%B2%F0%9F%87%A6;Cybersecurity+Researcher+%26+Pentester;AI+%2F+Machine+Learning+Engineer;Game+Developer+%E2%80%94+Unity+%2B+ML-Agents;Building+at+the+intersection+of+security+%26+intelligence." alt="Typing SVG" />

<br/><br/>

[![Profile Views](https://komarev.com/ghpvc/?username=yasohm&style=flat-square&color=00D9FF&label=PROFILE+VIEWS)](https://github.com/yasohm)&nbsp;
[![Status](https://img.shields.io/badge/STATUS-OPEN_TO_WORK-00ff88?style=flat-square)](https://github.com/yasohm)&nbsp;
[![Location](https://img.shields.io/badge/MOROCCO-🇲🇦-ff6b6b?style=flat-square)](https://github.com/yasohm)&nbsp;
[![BTS](https://img.shields.io/badge/BTS-Application_Dev-7C3AED?style=flat-square)](https://github.com/yasohm)

</div>

---

## `> whoami`


```yaml
name     : Yassin Benhaida
handle   : @yasohm
role     : Developer 
study    : BTS — Application Development 🇲🇦
domains  :
  - Cybersecurity 
  - Artificial Intelligence & Machine Learning
  - Game Development (Unity + ML-Agents)

philosophy: "Build tools that think, systems that defend,
             and worlds that feel alive."
```

<br clear="right"/>

---

## `> ls ./projects/ --sort=domain`

<br/>

### `[01]` Cybersecurity

<table>
<tr>
<td width="50%" valign="top">

#### [YASSIN HACK TOOLS](https://github.com/yasohm/YASSIN-HACK-TOOLS)
> Advanced Penetration Testing Suite — 20+ integrated modules

![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![Bash](https://img.shields.io/badge/Bash-4EAA25?style=flat-square&logo=gnubash&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=black)

```bash
git clone https://github.com/yasohm/yassin_hackTools.git
cd yassin_hackTools && chmod +x run.sh && ./run.sh
```

| Module | Tool |
|--------|------|
| Network Recon | Nmap |
| Web Security | SQLMap · RED_HAWK |
| Exploitation | Metasploit |
| OSINT | Custom tools |
| Social Engineering | Awareness suites |

![Version](https://img.shields.io/badge/v2.0-00D9FF?style=flat-square)
![License](https://img.shields.io/badge/GPL_v3-22c55e?style=flat-square)

</td>
<td width="50%" valign="top">

#### [whereU](https://github.com/yasohm/whereU)
> Social Engineering Geolocation Tool

![Bash](https://img.shields.io/badge/Bash-4EAA25?style=flat-square&logo=gnubash&logoColor=white)
![Apache](https://img.shields.io/badge/Apache2-D22128?style=flat-square&logo=apache&logoColor=white)
![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=flat-square&logo=javascript&logoColor=black)

```bash
git clone https://github.com/yasohm/whereU.git
cd whereU && chmod +x whereU.sh
sudo ./whereU.sh
```

**How it works:**
- Deploys a Google Maps-like fake interface
- Requests browser geolocation permission
- Tunnels via **Serveo** for remote access
- Logs GPS coords, IP, User-Agent in real time

| Captured Data | Method |
|--------------|--------|
| GPS Coordinates | HTML5 Geolocation API |
| IP Address | Apache access logs |
| User Agent | HTTP headers |

![Version](https://img.shields.io/badge/v1.3-00D9FF?style=flat-square)

</td>
</tr>
</table>

> ⚠️ All security tools are designed for **authorized testing and educational use only**.

---

### `[02]` Artificial Intelligence

<table>
<tr>
<td width="100%" valign="top">

#### PhishGuard — AI Phishing Detector
> Full-stack real-time phishing detection powered by Machine Learning

![FastAPI](https://img.shields.io/badge/FastAPI-009688?style=flat-square&logo=fastapi&logoColor=white)
![React](https://img.shields.io/badge/React-61DAFB?style=flat-square&logo=react&logoColor=black)
![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![PostgreSQL](https://img.shields.io/badge/PostgreSQL-4169E1?style=flat-square&logo=postgresql&logoColor=white)
![Docker](https://img.shields.io/badge/Docker-2496ED?style=flat-square&logo=docker&logoColor=white)
![scikit-learn](https://img.shields.io/badge/scikit--learn-F7931E?style=flat-square&logo=scikitlearn&logoColor=white)

```bash
git clone <phishguard-repo>
cd phishguard && docker-compose up --build
# Frontend → http://localhost:5173
# API Docs  → http://localhost:8000/docs
```

**Architecture:**

```
URL Input
    └─> Feature Extractor (13 signals)
          ├─ HTTPS check          ├─ Domain age
          ├─ Suspicious keywords  ├─ HTML forms
          └─ URL structure        └─ ...
                    │
                    ▼
          RandomForest Classifier (sklearn)
                    │
                    ▼
          Risk Score → [SAFE · SUSPICIOUS · DANGEROUS]
                    │
                    ▼
          History (PostgreSQL) + Paginated UI (React + Tailwind)
```

| Layer | Stack |
|-------|-------|
| Backend API | FastAPI · SQLAlchemy · Pydantic |
| AI Model | scikit-learn RandomForest · Pandas · BeautifulSoup4 |
| Frontend | React · Vite · Tailwind CSS · Axios · Lucide |
| Database | PostgreSQL |
| DevOps | Docker · Docker Compose |

</td>
</tr>
</table>

---

### `[03]` Game Development `×` AI

<table>
<tr>
<td width="100%" valign="top">

#### PHANTOMFALL — 2D Platformer with Adaptive AI Enemy
> Final Year Project (PFE) — Unity 2D + Imitation Learning via Random Forest

![Unity](https://img.shields.io/badge/Unity_2023_LTS-FFFFFF?style=flat-square&logo=unity&logoColor=black)
![CSharp](https://img.shields.io/badge/C%23-239120?style=flat-square&logo=csharp&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=flat-square&logo=python&logoColor=white)
![scikit-learn](https://img.shields.io/badge/scikit--learn-F7931E?style=flat-square&logo=scikitlearn&logoColor=white)
![ML-Agents](https://img.shields.io/badge/ML--Agents_4.0-00D9FF?style=flat-square)

**What makes it unique:** The ghost enemy starts as a rule-based FSM. As you play, it *silently records its own decisions*, trains a Random Forest in the background, then **hot-swaps the FSM brain for the ML model — without restarting the game.**

```
┌─────────────────────────────────────────────────────┐
│  PHASE 1 — PLAY                                     │
│  FSM (7 states) controls enemy                      │
│  ImitationDataCollector records (obs[14], action[4])│
│  → gameplay_data.jsonl                              │
├─────────────────────────────────────────────────────┤
│  PHASE 2 — TRAIN (background, every 30s / on death) │
│  BackgroundTrainer: python3 train_enemy.py          │
│  4 × RandomForestClassifier (move/attack/           │
│  strafe/retreat) → JSON models                      │
├─────────────────────────────────────────────────────┤
│  PHASE 3 — INFER (hot-reload, zero downtime)        │
│  SklearnModelRunner: C# Random Forest (no ONNX)    │
│  EnemyBrain.TryApplySklearnOverride()               │
│  FSM replaced by ML — enemy learned from itself     │
└─────────────────────────────────────────────────────┘
```

**Enemy FSM — 7 States:**

```
PATROL ──[detected]──> INVESTIGATE ──[in sight]──> CHASE
                                                      │
                              ┌───────────────────────┤
                        [ally nearby]           [in range]
                              │                       │
                           STRAFE                  ATTACK
                                                      │
                                          [HP < 25%] ─┤
                                                      │
                                           RETREAT / REPOSITION
```

**ML Observations (14 floats per frame):**

| # | Signal | # | Signal |
|---|--------|---|--------|
| 0–1 | Relative player position (x,y) | 7 | Distance (normalized) |
| 2–3 | Player velocity (x,y) | 8 | Enemy HP (0–1) |
| 4 | Heatmap zone value | 9 | Attack cooldown ready |
| 5 | Player flee dot product | 10 | Facing direction |
| 6 | Player speed fraction | 11–13 | Relative velocity (x,y,z) |

**Model accuracy (typical session):**

| Branch | Task | Accuracy |
|--------|------|----------|
| move | Left / Stop / Right | ~87% |
| attack | Yes / No | ~92% |
| strafe | Yes / No | ~78% |
| retreat | Yes / No | ~85% |

**Game systems:**
- 3 playable levels + dedicated Training Scene
- Binary save system with 3 slots + checkpoint respawn
- Full UI: main menu · pause · options · key remapping · victory · game over
- Cinemachine camera with cinematic pan events
- Moving platforms with dynamic player parenting
- Pack AI — enemies communicate and share aggro

| Stack | Detail |
|-------|--------|
| Engine | Unity 2023 LTS (2D) |
| Language | C# + Python 3 |
| Camera | Cinemachine 3.1.6 |
| Input | Unity Input System 1.18 |
| ML Training | ML-Agents 4.0.3 (PPO config included) |
| ML Inference | C# pure implementation (no Barracuda / ONNX) |
| Offline ML | scikit-learn · numpy |
| Save | BinaryFormatter (.sav files) |

</td>
</tr>
</table>

---

## `> cat ./stack.yaml`

<div align="center">

**Languages**

![C#](https://img.shields.io/badge/C%23-239120?style=for-the-badge&logo=csharp&logoColor=white)
![Python](https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![JavaScript](https://img.shields.io/badge/JavaScript-F7DF1E?style=for-the-badge&logo=javascript&logoColor=black)
![Java](https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

**Web & Backend**

![FastAPI](https://img.shields.io/badge/FastAPI-009688?style=for-the-badge&logo=fastapi&logoColor=white)
![React](https://img.shields.io/badge/React-61DAFB?style=for-the-badge&logo=react&logoColor=black)
![.NET](https://img.shields.io/badge/.NET-512BD4?style=for-the-badge&logo=dotnet&logoColor=white)
![HTML5](https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white)
![CSS3](https://img.shields.io/badge/CSS3-1572B6?style=for-the-badge&logo=css3&logoColor=white)
![TailwindCSS](https://img.shields.io/badge/Tailwind-06B6D4?style=for-the-badge&logo=tailwindcss&logoColor=white)

**AI / ML**

![scikit-learn](https://img.shields.io/badge/scikit--learn-F7931E?style=for-the-badge&logo=scikitlearn&logoColor=white)
![Pandas](https://img.shields.io/badge/Pandas-150458?style=for-the-badge&logo=pandas&logoColor=white)
![NumPy](https://img.shields.io/badge/NumPy-013243?style=for-the-badge&logo=numpy&logoColor=white)
![Unity ML-Agents](https://img.shields.io/badge/ML--Agents-FFFFFF?style=for-the-badge&logo=unity&logoColor=black)

**Infrastructure & Tools**

![Docker](https://img.shields.io/badge/Docker-2496ED?style=for-the-badge&logo=docker&logoColor=white)
![PostgreSQL](https://img.shields.io/badge/PostgreSQL-4169E1?style=for-the-badge&logo=postgresql&logoColor=white)
![MySQL](https://img.shields.io/badge/MySQL-4479A1?style=for-the-badge&logo=mysql&logoColor=white)
![Firebase](https://img.shields.io/badge/Firebase-FFCA28?style=for-the-badge&logo=firebase&logoColor=black)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)

**Game Development**

![Unity](https://img.shields.io/badge/Unity_2023-FFFFFF?style=for-the-badge&logo=unity&logoColor=black)
![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)

</div>

---

## `> git log --stat`

<div align="center">

<img src="https://github-readme-stats.vercel.app/api?username=yasohm&show_icons=true&theme=tokyonight&hide_border=true&bg_color=0D1117&title_color=00D9FF&icon_color=00D9FF&text_color=C9D1D9&ring_color=00D9FF&border_radius=12" height="170"/>
&nbsp;
<img src="https://github-readme-stats.vercel.app/api/top-langs/?username=yasohm&layout=compact&theme=tokyonight&hide_border=true&bg_color=0D1117&title_color=00D9FF&text_color=C9D1D9&border_radius=12" height="170"/>

<img src="https://github-readme-streak-stats.herokuapp.com/?user=yasohm&theme=tokyonight&hide_border=true&background=0D1117&stroke=00D9FF&ring=00D9FF&fire=ff6b6b&currStreakLabel=00D9FF&sideLabels=C9D1D9&dates=8b949e" />

<img src="https://github-readme-activity-graph.vercel.app/graph?username=yasohm&theme=tokyo-night&hide_border=true&bg_color=0D1117&color=00D9FF&line=00D9FF&point=FFFFFF&area=true&area_color=00D9FF20" />

</div>

---

## `> cat ./contact.md`

<div align="center">

[![Email](https://img.shields.io/badge/Gmail-benhaidayassine1%40gmail.com-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:benhaidayassine1@gmail.com)
&nbsp;
[![LinkedIn](https://img.shields.io/badge/LinkedIn-yassin--benhaida-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://linkedin.com/in/yassin-benhaida)
&nbsp;
[![GitHub](https://img.shields.io/badge/GitHub-yasohm-181717?style=for-the-badge&logo=github&logoColor=white)](https://github.com/yasohm)

</div>

---

<div align="center">

```
┌──────────────────────────────────────────────────────────────┐
│  "The best security tool is one that thinks for itself —     │
│   so I build AI that does exactly that."                     │
│                                           — Yassin Benhaida  │
└──────────────────────────────────────────────────────────────┘
```

<sub>Crafted by <strong>Yassin Benhaida</strong> · Morocco 🇲🇦 · 2026</sub>

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:00D9FF,60:0a0e1a,100:0D1117&height=90&section=footer" />

</div>
