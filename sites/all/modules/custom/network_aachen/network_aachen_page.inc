<?php
/**
 * Created by PhpStorm.
 * User: julien
 * Date: 15.06.18
 * Time: 09:23
 */

function network_aachen_page(){
    //drupal_add_js(drupal_get_path('module', 'network_aachen') . '/js/d3.v2.min.js');
    //drupal_add_js(drupal_get_path('module', 'network_aachen') . '/js/mainscript.js');
    drupal_add_css(drupal_get_path('module', 'network_aachen') . '/css/network_aachen.css');



    $einleitung = '<p>Auf dieser Seite werden einige der Ergebnisse der Online-Befragung, die das Projekt InDeKo.Navi unter den Projektbeteiligten der am  Förderschwerpunkt "Betriebliches Kompetenzmanagement im demografischen Wandel" beteiligten Projekte im vierten Quartal 2015 durchgeführt hat, als interaktive Netzwerkvisualisierungen präsentiert. Die dargestellten Ergebnisse sind als Momentaufnahme der Begebenheiten zum Zeitpunkt der Datenerhebung zu interpretieren.</p>
          <p>Die Daten, die auf Personenebene erhoben wurden, wurden auf die Projekteebene aggregiert, so dass aus den dargestellten Visualisierungen keine Rückschlüsse auf das Antwortverhalten einzelner Befragter  gezogen werden können. Außerdem ist zu berücksichtigen, dass aufgrund der Beteiligungsquote an der Befragung  von ca. 43% über einige Projekte keine oder nur wenige Daten vorliegen und die Visualisierungen deshalb an verschiedenen Stellen fehlende Relationen und unbekannte Attributierungen enthalten. </p>
          <p>Dennoch wird durch die Visualisierung der Relationen zwischen den Projekten des Förderschwerpunkts in Kombination mit verschiedenen Aspekten des betrieblichen Kompetenzmanagement im demografischen Wandel eine Perspektive aufgetan, die zur Exploration einlädt. Dem Betrachter wird ermöglicht, die Struktur der Verbindungen im Förderschwerpunkt zu überblicken und gemeinsame Aspekte der verschiedenen Projekte in Augenschein zu nehmen. So können bestehende und auch fehlende Verbindungen zwischen Projekten, die sich mit ähnlichen Aspekten beschäftigen, eingeschätzt werden und mögliche zukünftige Synergieeffekte und Kooperationsmöglichkeiten ausgelotet werden.</p>
          <h3>Interaktive Netzwerkvisualisierung</h3>
          <p>Über die Einstellungsmöglichkeiten auf der rechten Seite können verschiedene Netzwerkvisualisierungen  zusammengestellt werden. Hierfür lassen sich vier Relationsarten auswählen, die aus den Antworten auf verschiedene Fragen des Onlinefragebogens errechnet wurden. Zur Auswahl stehen die Relationsarten „Bekanntheit“, „Interesse“, „Austausch besteht“ und „Austausch erwünscht“. Näheres hierzu wird weiter unten im Abschnitt „Relationsarten“ erläutert. Außerdem lassen sich drei Aspekte, unter denen die Projekte betrachtet werden, auswählen. Diese sind „Fokusgruppen“, „Demografischer Aspekt“ und „Zielgruppe“. Näheres hierzu wird weiter unten im Abschnitt „Aspekte“ erläutert.</p>
          <p>Die Projekte sind in den Visualisierungen als farbige Kreise dargestellt und stellen die Knoten im Netzwerk dar. Die Farben der Kreise geben Aufschluss über die jeweilige Ausprägung des aktuell betrachteten Aspektes. Wird z.B. die Visualisierung der Fokusgruppen ausgewählt, steht ein rot eingefärbter Kreis für ein Projekt aus der Fokusgruppe 1. </p>
          <p>Die Pfeile zwischen den Kreisen bilden die Beziehungen zwischen den Projekten ab und stellen die Kanten im Netzwerk dar. Die Pfeile stehen für gerichtete Beziehungen, die von einem Projekt zu einem anderen Projekt verlaufen. Zeigt ein Pfeil von einem Projekt A zu einem Projekt B, so bedeutet dies, dass mindestens die Hälfte der Befragten Personen aus Projekt A, die die Frage beantwortet haben, den betreffenden Frageaspekt Projekt B gegenüber positiv bescheiden. Wie dies im einzelnen Fall zu interpretieren ist, wird ebenfalls im nachfolgenden Abschnitt „Relationsarten“ erläutert.</p>
          <p>Fährt der Betrachter mit der Maus über einen Knoten in der Netzwerkvisualisierung, so werden dieser Knoten und die an ihn angrenzenden Kanten hervorgehoben. Außerdem werden der Name des Projektes, für das dieser Knoten steht, sowie die zugehörige Fokusgruppe in einem Informationskasten an der rechten Bildschirmseite eingeblendet.</p>
          <p>Die Platzierung der Knoten auf der Projektionsfläche wurde durch einen Algorithmus vorgenommen und stellt eine sinnvolle aber nicht zwingende Anordnung der Projekte im Raum dar.  Klickt der Betrachter auf einen Knoten und hält die linke Maustaste gedrückt, lässt sich der so ausgewählte Knoten in der Visualisierung verschieben. So lassen sich eventuell verdeckte Relationen oder Unklarheiten über einen Kantenverlauf im Netzwerk manuell auflösen.</p>
          <h3>Relationsarten</h3>
          <p><b><u>Bekanntheit</u> der Projektinhalte</b></p>
          <p>In der Erhebung wurden die Befragten zunächst gefragt, in welchem Projekt sie selbst beschäftigt sind. Anschließend wurden Fragen zu allen anderen Projekten gestellt. Zunächst wurde gefragt, ob bekannt ist, mit welchen Inhalten sich das jeweils andere Projekt beschäftigt. Zur Auswahl standen die Auswahlkategorien „Ja, größtenteils“, Ja, teilweise“, Ja, aber nur oberflächlich“ und „Nein“. Für die hier vorgenommene Visualisierung wurden diese Antwortkategorien in „Ja“ (Zusammenfasung der ersten drei  Antwortkategorien) und „Nein“ dichotomisiert. Anschließend wurden die so ermittelten Antworten jeweils über die Gesamtmenge der befragten Personen pro Projekt aggregiert. Haben mindestens die Hälfte der befragten Personen aus Projekt A, die die Frage beantwortet haben, angegeben, dass sie wissen, mit welchen Inhalten sich Projekt B beschäftigt, dann wird die Relation „Bekannt“ als gegeben betrachtet.</p>
          <p>Hat eine befragte Person angegeben, dass ihr ein bestimmtes anderes Projekt im oben beschriebenen Sinn bekannt ist, dann wurde sie näher zu diesem Projekt befragt. Hierzu wurden jeweils drei weitere Fragen gestellt, aus denen drei weiteren Beziehungsrelationen konstruiert wurden, welche im Folgenden beschrieben werden.</p>
          <p><b><u>Interesse:</u> Relevanz für das eigene Projekt</b></p>
          <p>Zunächst wurde gefragt, für wie interessant die Befragten das jeweils andere Projekt für das eigene Projekt halten. Hier standen zur Beantwortung die folgenden Kategorien zur Verfügung: „Sehr Interessant“, „Interessant“, „weniger interessant“ und „nicht interessant“. Auch hier wurden die Antwortkategorien anschließend für den Zweck der Visualisierung dichotomisiert. Hierbei wurden die Kategorien „Sehr Interessant“ und „Interessant“ als vorhandenes Interesse und „wenig interessant“ und „nicht interessant“ als abwesendes Interesse interpretiert. Die Relation „Interesse“ ist also gegeben, wenn mindestens die Hälfte der befragten Personen aus Projekt A, die die Frage beantwortet haben, angegeben, dass sie Projekt B für das eigene Projekt A für sehr interessant oder interessant halten.</p></b>
          <p><b><u>Austausch besteht</u></b></p>
          <p>Sodann wurde gefragt, ob ein Austausch konkreter oder informeller Art zwischen dem eigenen Projekt A und dem jeweils anderen Projekt B besteht. Hier konnten die Befragten zwischen den Antwortmöglichkeiten „Ja“, „Nein“ und „Unbekannt“ auswählen. Die Relation „Austausch besteht“ wird als gegeben angesehen, wenn mindestens die Hälfte der befragten Personen aus Projekt A, die die Frage beantwortet haben, angegeben, dass ihr Projekt mit dem jeweiligen Projekt B im Austausch steht. </p>
          <p><b>(Mehr) <u>Austausch erwünscht</u></b></p>
          <p>Zuletzt wurde gefragt, ob die Befragte sich (mehr) Austausch zu dem jeweils anderen Projekt B wünscht. Hier wurden die Antwortmöglichkeiten „Ja“ und „Nein“ vorgegeben. Aus den gegebenen Antworten wurde die Relation „Austausch erwünscht“ generiert. Die Relation „Mehr Austausch“ wird als gegeben angesehen, wenn mindestens die Hälfte der befragten Personen aus Projekt A, die die Frage beantwortet haben, angegeben, dass sie sich (mehr) Austausch mit dem jeweiligen Projekt B wünschen.</p>
          <p>Alle so erstellten Relationen sind als gerichtete Beziehungen zu betrachten. Es wird also immer die Haltung der Mehrheit der Befragten aus einem Projekt zu einem anderen Projekt abgebildet. Die Richtung der Beziehung wird durch die Richtung des Pfeils in der Abbildung visualisiert. Die Beziehung zwischen zwei Projekten A und B können also vier Ausprägungen annehmen. So kann die Beziehung als von beiden Seiten als vorhanden angesehen werden (Pfeile in beide Richtungen), sie kann von nur einem der beiden Projekte als gegeben betrachtet werden (ein Pfeil in die eine oder in die andere Richtung) oder sie kann von beiden Seiten als nicht vorhanden angesehen werden (keinerlei Pfeile zwischen den Projekten).</p>
          <h3>Aspekte</h3>
          <p>Über  eine zweite Auswahlmöglichkeit auf der rechten Seite der Netzwerkdarstellung lassen sich verschiedene Aspekte auswählen, unter denen die Projekte betrachtet werden können. Die hier dargestellten drei Aspekte werden im Folgenden näher erläutert.</p>
          <p>Wird der Aspekt <b>„Fokusgruppen“</b> ausgewählt, wird in den Netzwerkvisualisierungen durch die Einfärbung der Knoten im Netzwerk die Zugehörigkeit der verschiedenen Projekte zu den verschiedenen Fokusgruppen dargestellt.  Die Aufschlüsselung des Farbschemas in die verschiedenen Fokusgruppen lässt sich der Legende entnehmen. Die Zuordnung der Projekte zu den Fokusgruppen wurde nicht durch die Online-Befragung erhoben sondern der Konzeption des Förderschwerpunktes entnommen.</p>
          <p>Wird der Aspekt <b>„Demografischer Aspekt“</b> ausgewählt, gibt die Einfärbung der Netzwerkknoten darüber Auskunft, ob sich ein Projekt mit einem bestimmten demografischen Aspekt befasst, nicht befasst oder ob über die Beschäftigung mit diesem Aspekt keine Informationen vorliegen. Die Zuordnung eines Projektes zu einer dieser drei Kategorien fußt auf den Ergebnissen der Online-Befragung. Gab mindestens die Hälfte der Befragten Personen aus einem Projekt an, dass sich dieses Projekt mit dem infrage stehenden demografischen Aspekt beschäftigt, so wurde diesem Projekt das Attribut „Trifft zu“ zugeschrieben. Gaben weniger als die Hälfte der Befragten an, dass sich dieses Projekt mit dem infrage stehenden demografischen Aspekt beschäftigt, so wurde diesem Projekt das Attribut „Trifft nicht zu“ zugeschrieben. Gab es keine Rückmeldung aus einem Projekt bezüglich der gestellten Frage, wurde dem Projekt das Attribut „Unbekannt“ zugeschrieben. Über der Aufschlüsselung des Farbschemas befindet sich eine weitere Auswahlfläche, über die sich der jeweils anzuzeigende demografische Aspekt auswählen lässt. Dort stehen die Aspekte „Alters- und Lebensphasen“, „Familienphasen“, „Gender / Geschlecht“, „Migrationshintergrund“,  und „Strukturschwache Regionen“ zur Auswahl.</p>
          <p>Wird der Aspekt <b>„Zielgruppe“</b> ausgewählt, lassen sich über die Auswahlfläche verschiedene Zielgruppen auswählen, die von den verschiedenen Projekten adressiert werden. Zur Auswahl stehen die Zielgruppen „Produzierende Unternehmen“, „Dienstleistungsbereich“, „Verwaltungsbereich“, „Wissenschaftsbereich“ und „Bildungsbereich“. Die Zuordnung der Attribute „Trifft zu“, „Trifft nicht zu“ und „Unbekannt“ folgt derselben Methodik wie oben im Abschnitt „Demografischer Aspekt“ beschrieben.</p>
          <h3>Technischer Hinweis</h3>
          <p>Für die korrekte Darstellung der Netzwerkvisualisierung wird ein moderner, aktueller Webbrowser vorausgesetzt. Der verwendete Browser muss HTML5 und CSS3 korrekt und standardkonform interpretieren. Die Verwendung von Javascript muss im Browser erlaubt sein. Zudem muss der Browser in der Lage sein, Vektorgraphiken selbst zu zeichnen. Für die optimale Darstellung empfehlen wir die Verwendung des aktuellen Firefox-Browsers. Dieser ist für alle gängigen Betriebssysteme kostenlos verfügbar.</p>';


    $output['header'] = array(
        '#prefix' => '<div id="network_aachen_einleitung_div">',
        '#suffix' => '</div>',
        '#markup' => '<h3>' . t('Netzwerkanalyse') . '</h3>' . $einleitung,
    );

    if(module_exists('d3')) {
        $network = network_aachen_draw_network();
    } else {
        drupal_set_message('The d3 module must be enabled', 'warning');
    }

    $output['network_1'] = array(
        '#prefix' => '<div id="network_aachen_visualisierung_div">',
        '#suffix' => '</div>',
        '#markup' => $network,
    );


    return $output;
}

function network_aachen_draw_network() {
    global $base_url;
    $data = $base_url . '/'. drupal_get_path('module', 'network_aachen') . '/graphFile.json';
    $chart = array(
        'id' => 'visualization',
        'type' => 'network_aachen',
        'data' => $data,

    );

    return d3_draw($chart);
}