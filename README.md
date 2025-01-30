# OpenKNX Shutter Controller Anwendung (OAM-ShutterController)

## Überblick

Die OpenKNX Shutter Controller Anwendung ermöglicht eine automatisierte Steuerung von Jalousien und Rollläden. Zusätzlich beinhaltet sie ein leistungsfähiges Logikmodul zur individuellen Anpassung.

## Funktionen

Die Anwendung unterstützt die Steuerung von bis zu 16 Jalousien/Rollläden. 
Folgende Hauptfunktionen können konfiguriert werden:

### Manuelle Steuerung
- **Handbetrieb:** Zusätzlich zur normalen Bedienung kann ein Aktivieren und Deaktivieren der Beschattung über die Jalousientaster konfiguriert werden.
- Blockieren der Handsteuerung abhängig vom aktuellen Betriebsmodus.

### Nachtmodus
- **Nachtmodus:** Automatisches Schließen und/oder Öffnen der Jalousien, basierend auf der Uhrzeit und/oder dem Sonnenstand.

### Beschattung
- **Zwei Beschattungsmodus:** Für unterschiedliche Wetterbedingungen. 
  Zum Beispiel:
  - **Normalmodus:** Reguläre Beschattung.
  - **Hitzeschutz:** Angepasst an extreme Temperaturen.

- Die Auswahl kann durch folgende Messwerte beinflusst werden:
    - Außentemperatur
    - Temperaturprognose
    - Helligkeit
    - UV-Index
    - Niederschlag
    - Wolkenbedeckung
    - Heizungsstatus
    - Raumtemperatur

### Fensterabhängige Steuerung
- **Kippstellung:** Lamelle in waagrechte Stellung für optimale Luftdurchzug.
- **Offenes Fenster:** Hochfahren von Jalousien bei Terrassentüren.

## Anwenderdokumentation

Die Anwenderdokumentation ist [hier](./doc/Applikationsbeschreibung.md) zu finden.


## Firmware

Eine vorkomplierte Firmware ist [hier](https://github.com/OpenKNX/OAM-ShutterController/releases) zu finden. ZIP Datei herunterladen, entpacken und der Anleitung im Readme folgen.

## Hardware

Als Hardware kann jede OpenKNX oder OpenKNX-Ready Hardware mit LAN oder WLAN verwendet werden.
Die vorkompilierte Firmware unterstützt:

- [REG1-Base](https://github.com/OpenKNX/OpenKNX/wiki/REG1-Base)

Verwendungshinweis:
- Entwicklerboards mit angeschlossener [Nano BCU](https://github.com/OpenKNX/OpenKNX/wiki/NanoBCU) ([Bezugsquelle](https://muster.ing-dom.de/Busankoppler/NanoBCU-Standard.html)) oder Siemens Busankoppler werden unterstützt.
- Für Einsteiger wird die Verwendung des [OpenKNX-REG1](https://github.com/OpenKNX/OpenKNX/wiki/OpenKNX-REG1) ([Bezugsquelle](https://muster.ing-dom.de/KNX-Geraete/OpenKNX-REG1-Base-Komplettbausatz.html)) empfohlen.

## Lizenz

Diese Software steht unter der [GNU GPL v3](LICENSE).