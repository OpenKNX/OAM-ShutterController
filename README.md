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

### Konfigurationstransfer

Mit Hilfe des Konfigurationstransfer kann die Konfiguration leicht auf eine neue Hardware übertragen werden.

### Logiken

Für zusätzliche besondere Anforderungen stehen bis zu 10 Logikkanäle bereit.

## Anwendungsdokumentation

Die detaillierte Beschreibungen der Anwendung ist in folgenden Abschnitten zu finden:

- [OpenKNX Applikationsbeschreibung](https://github.com/OpenKNX/OGM-Common/blob/v1/doc/Applikationsbeschreibung-Common.md)
- [Konfigurationstransfer](https://github.com/OpenKNX/OFM-ConfigTransfer/blob/v1/doc/Applikationsbeschreibung-ConfigTransfer.md)
- [Jalousiensteuerung](https://github.com/OpenKNX/OFM-ShutterControllerModule/blob/v1/doc/Applikationsbeschreibung-ShutterController.md)
- [Logikmodule](https://github.com/OpenKNX/OFM-LogicModule/blob/v1/doc/Applikationsbeschreibung-Logik.md)
- [Funktionsblöcke](https://github.com/mgeramb/OFM-FunctionBlocks/blob/v1/doc/Applikationsbeschreibung-FunctionBlocks.md)

## Empfohlene Hardware

Die Anwendung wurde erfolgreich auf folgenden Plattformen getestet:
- **RP2040**
- **ESP32**

Verwendungshinweis:
- Entwicklerboards mit angeschlossener [Nano BCU](https://github.com/OpenKNX/OpenKNX/wiki/NanoBCU) ([Bezugsquelle](https://muster.ing-dom.de/Busankoppler/NanoBCU-Standard.html)) oder Siemens Busankoppler werden unterstützt.
- Für Einsteiger wird die Verwendung des [OpenKNX-REG1](https://github.com/OpenKNX/OpenKNX/wiki/OpenKNX-REG1) ([Bezugsquelle](https://muster.ing-dom.de/KNX-Geraete/OpenKNX-REG1-Base-Komplettbausatz.html)) empfohlen.

## Lizenz

Diese Software steht unter der [GNU GPL v3](LICENSE).