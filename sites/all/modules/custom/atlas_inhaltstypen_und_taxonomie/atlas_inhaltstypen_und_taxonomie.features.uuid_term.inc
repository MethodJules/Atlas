<?php
/**
 * @file
 * atlas_inhaltstypen_und_taxonomie.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function atlas_inhaltstypen_und_taxonomie_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Wirtschaftswissenschaften',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => '022e0cde-0c5b-40c2-aaa5-4162ff526d9e',
    'vocabulary_machine_name' => 'tax_morph_m_disziplin',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => '04156711-fb7a-46b5-8684-b9880576b86c',
    'vocabulary_machine_name' => 'tax_morph_m_unternehmensgroesse',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Forschungsziel',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '042722a2-436b-42f7-817b-6bf2ed1bb6a8',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis_ziel',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Land- und Forstwirtschaft',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 11,
    'uuid' => '051c6fe7-5133-42bf-b294-524fb4bba1d3',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => '> 10',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '0643bd00-bf32-4534-b043-6c648b2bb2e2',
    'vocabulary_machine_name' => 'tax_morph_praxiseinsatz',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Rentner/Pensionäre',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '06afe763-4a34-4f37-8ebb-6f4878946619',
    'vocabulary_machine_name' => 'tax_morph_m_lebensphasen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Werkzeug',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '0775121e-b2ee-42dd-b64a-b96defa39362',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Weiterentwicklung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '09391b28-0d48-4bec-acb1-3b3a0e7ccfc2',
    'vocabulary_machine_name' => 'weiter_oder_neuentwicklung',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Kompetenzsicherung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '098d603b-2062-43d6-b107-7c81980fa30e',
    'vocabulary_machine_name' => 'tax_morph_m_funktionscluster',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'eLearning',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '0a380d7a-06c2-4c73-849d-e797e0fd0fb0',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1f8a423c-e1c6-4fe4-90bb-9c9cc1f0a75e',
    ),
  );
  $terms[] = array(
    'name' => 'Verkehr und Nachrichtenübermittlung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 14,
    'uuid' => '0ac778af-cdaa-43ed-99a0-b44cd2d0efee',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '0b153973-394d-4f06-9ea6-46159e60a285',
    'vocabulary_machine_name' => 'tax_morph_m_qualifikationsniveau',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Grundstücks- und Wohnungswesen, Vermietung beweglicher Sachen',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 8,
    'uuid' => '0dbc940b-eea1-46f2-801c-4136c262b598',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Baugewerbe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '0e5899c6-308e-45d1-b364-a31514a14835',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Erziehung und Unterricht',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '0e781f86-33e4-4312-922d-fe929be3e717',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 0,
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '10fa0f4c-4ab3-47a5-bcee-638ebbe72391',
    'vocabulary_machine_name' => 'tax_morph_praxiseinsatz',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '138ca811-2d68-4257-9be5-1ef9aa476820',
    'vocabulary_machine_name' => 'tax_morph_m_unternehmensgroesse',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstige',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 8,
    'uuid' => '143ef6e0-72a7-42ae-bb90-4ad0d818aa52',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Personalentwicklung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '14d19e65-86cc-4539-8d86-7c04184cb435',
    'vocabulary_machine_name' => 'tax_morph_m_prim_re_orientierung',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keines',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '193ae00f-275d-45bf-994d-ba328e97c2c3',
    'vocabulary_machine_name' => 'tax_morph_m_forschungsziel',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Organisationsentwicklung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '19613661-9d6b-4ff2-aa14-3d49a11b4042',
    'vocabulary_machine_name' => 'tax_morph_m_prim_re_orientierung',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kompetenzmessung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '1b145ced-52ea-4526-8301-5bcdb81f09d6',
    'vocabulary_machine_name' => 'tax_morph_m_funktionscluster',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Interview',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '1c5aff57-7d74-42fb-b3c7-e7ffb0a58603',
    'vocabulary_machine_name' => 'tax_morph_m_angewendete_forschungsmethode',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Vorgehensweisen der Kompetenzmessung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 20,
    'uuid' => '1cbf7555-72fd-4795-b047-6ef66255090b',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Akademisierung der beruflichen Bildung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '1d23f0d6-0f6c-43a8-b11c-d9d2f7730159',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Mittelfristig - Taktisch',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '1dbc2297-757b-4334-8c2f-dbe7df99a12b',
    'vocabulary_machine_name' => 'tax_morph_m_zeithorizont',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Energie- und Wasserversorgung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '1e608bdf-9002-4e3a-aa83-58a7b85051c5',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kompetenzanalyse',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '1e8e7c81-890f-422e-acdd-c97f4cc93839',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    ),
  );
  $terms[] = array(
    'name' => 'Industrie 4.0',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '1eaea6e2-eac1-469a-82f4-242e4d7bac4b',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Instrumente der Kompetenzentwicklung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '1f8a423c-e1c6-4fe4-90bb-9c9cc1f0a75e',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Wird derzeit umgesetzt',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '22cb8e14-138d-4475-8fda-62052ed5b27f',
    'vocabulary_machine_name' => 'tax_morph_umsetzungsgrad',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '23782bf3-7a7f-40f1-b975-0f4164b122df',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Bergbau und Gewinnung von Steinen und Erden',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '238e7219-02f5-4850-afe5-95502986b837',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Virtuell',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '2983003d-e33e-4067-8fbf-6117ce321964',
    'vocabulary_machine_name' => 'tax_morph_virtualisierung',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kurzfristig - Operativ',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '29914947-0e76-4384-b4dc-01e53a413cf0',
    'vocabulary_machine_name' => 'tax_morph_m_zeithorizont',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Großunternehmen (250 oder mehr Beschäftigte)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '2aec8133-0468-4659-8064-93cb953397fa',
    'vocabulary_machine_name' => 'tax_morph_m_unternehmensgroesse',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Qualitativ',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '2ebc6cda-576e-4391-83ca-7769127b04e0',
    'vocabulary_machine_name' => 'tax_morph_forschungsmethodik',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Auszubildende',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '2f1ad8f6-9a38-4603-8b6d-0904da2d95ba',
    'vocabulary_machine_name' => 'tax_morph_m_lebensphasen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Beobachtungsbasiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '30dc9211-95ec-4a3c-9b08-cde2bdb5e11a',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1cbf7555-72fd-4795-b047-6ef66255090b',
    ),
  );
  $terms[] = array(
    'name' => 'Wurde umgesetzt',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '32e80bd0-521d-4420-b1f7-ac379adab34c',
    'vocabulary_machine_name' => 'tax_morph_umsetzungsgrad',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 11,
    'uuid' => '340edafd-dcdc-4a2a-b702-80830fd2c645',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Prototyp',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '347098ee-34be-4d70-85f0-c2cce3972ffc',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Mittlere Unternehmen (50 bis 249 Beschäftigte)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '35e504be-d920-4bf8-b2e9-d18d45e69b0f',
    'vocabulary_machine_name' => 'tax_morph_m_unternehmensgroesse',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Modell',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '37b7b847-4d00-4a03-8653-4677c5493700',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Langfristig - Strategisch',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '37b8d29c-f545-4017-9515-1333307f0a12',
    'vocabulary_machine_name' => 'tax_morph_m_zeithorizont',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Teilzeit',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '3a1b5f69-f678-4f23-b4ef-48044946c659',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Konzept',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '3df303f6-9f51-4a52-bf1d-f5e00db83e10',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Erziehungswissenschaften',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '3e383c11-a530-444e-8dd5-c76bf1dc0c7b',
    'vocabulary_machine_name' => 'tax_morph_m_disziplin',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Virtuelle Netzwerke',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '3e71b977-21a9-4250-beec-d82ca25dde0f',
    'vocabulary_machine_name' => 'tax_morph_m_unternehmensgroesse',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Psychologie',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '3f29e301-1933-4722-aae2-856f4e2ad8a9',
    'vocabulary_machine_name' => 'tax_morph_m_disziplin',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Interview- / Fragebogenbasiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '3f6b6eb3-d7d6-40bd-9a81-76725278574c',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1cbf7555-72fd-4795-b047-6ef66255090b',
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '4181a5ae-3446-42a0-afbf-41a33955cf65',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => '4222b6bb-cc5b-4c1f-988d-7f23b2ef7b8a',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '429fa5ab-5184-4df2-9238-e47a909fd2a0',
    'vocabulary_machine_name' => 'tax_morph_virtualisierung',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Fremdorganisiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '4306119f-566b-4b9a-850b-db05f6be5522',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => '65-75',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => '43530023-74b6-46fe-b2f6-09040fc25798',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Umsetzungspartner',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '458f5faa-68c9-440a-8356-aac792a20e99',
    'vocabulary_machine_name' => 'institution_funktion',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '466376ea-1a33-4a23-b10c-977fd0cfacb0',
    'vocabulary_machine_name' => 'tax_morph_m_zeithorizont',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gap-Analyse',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '491803d7-0d6a-402e-812c-a582462e4409',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    ),
  );
  $terms[] = array(
    'name' => 'Phasenweise',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '4aaf9825-536c-4b94-9896-56c329756379',
    'vocabulary_machine_name' => 'tax_morph_m_verlauf_der_ma_nahme_n_zum_bkm',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kooperativ',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 9,
    'uuid' => '4cdc66bf-410e-4a17-9d60-03a1e8308a14',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Berufsanfänger',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '4f6bb07b-f99b-492d-ab6b-9dae7d607458',
    'vocabulary_machine_name' => 'tax_morph_m_lebensphasen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Mitten im Beruf',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '507abeb3-9ad9-43f1-af6a-9855a8703dc0',
    'vocabulary_machine_name' => 'tax_morph_m_lebensphasen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Mitarbeiterbindung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '5089692a-db89-420d-aad4-297353af9b84',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Solo-Selbstständigkeit',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => '51394b95-3c91-4b3f-b7b0-0d6c24c82869',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Verwendetes Analysewerkzeug',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '558fafa6-5edd-427a-b9ef-d239d775597f',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1cbf7555-72fd-4795-b047-6ef66255090b',
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 16,
    'uuid' => '561b73ce-6b5e-4d31-94ca-c7a3ed67c1a3',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => '6-10',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '561cda4a-5fc5-4b96-88d0-589ee290de71',
    'vocabulary_machine_name' => 'tax_morph_praxiseinsatz',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Schüler',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '57e029e1-4781-449c-bcdd-7ca4fe9e0663',
    'vocabulary_machine_name' => 'tax_morph_m_lebensphasen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Formalisiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '5851975c-208f-4c26-b98c-23e04d8d8531',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'In Vorbereitung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '593bc240-2069-460e-9d54-d6a326418188',
    'vocabulary_machine_name' => 'tax_morph_umsetzungsgrad',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => '1-5',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '59e2b949-faed-4575-aeeb-e0e36577927c',
    'vocabulary_machine_name' => 'tax_morph_praxiseinsatz',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Beschäftigte mit höherer Qualifikation',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '5c7c7276-fe3c-4987-95f1-cbf5a4e00991',
    'vocabulary_machine_name' => 'tax_morph_m_qualifikationsniveau',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Technologisierung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 10,
    'uuid' => '5f8edd13-9dad-4d5d-97ad-34d7e33fc526',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '5fe430b6-c6d3-411a-91ae-3be56bd66389',
    'vocabulary_machine_name' => 'tax_morph_m_organisationsebene',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Lerninseln',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '612d9c76-4b06-469f-ad3c-1e67e9e2a4bc',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1f8a423c-e1c6-4fe4-90bb-9c9cc1f0a75e',
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '61afbe5a-d257-47d7-bec4-1d8d879fedb5',
    'vocabulary_machine_name' => 'tax_morph_m_prim_re_orientierung',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 12,
    'uuid' => '6361933b-1e23-419f-a50d-7f946483d5a8',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Arbeitslosigkeit',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 10,
    'uuid' => '64371209-57ad-471e-85ec-80bc8222964d',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstige',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '649773e9-4c3f-4611-84ae-02b3c06903d9',
    'vocabulary_machine_name' => 'institution_funktion',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => '> 75',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '6649bbc3-4bbb-4911-9f35-c74e6845fd36',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Informell',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '69290945-5884-4c71-a7c9-938bffb55e70',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Alternde Belegschaft',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '6a12a7c1-bcac-447e-85c1-b598bbb8de9b',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '6c4c24c4-e5e8-4433-bf96-ac0c979e9f1c',
    'vocabulary_machine_name' => 'tax_morph_forschungsmethodik',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Instrument',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '6f05d9ee-c363-42ad-83ca-3bf9a92f118a',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Literaturüberblick (Literature Review)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '701d958d-30ce-41c2-98e5-757c682e9357',
    'vocabulary_machine_name' => 'tax_morph_m_forschungsziel',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Individuumsorientiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '7080356d-345c-4ac0-8190-2e775b0104de',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1cbf7555-72fd-4795-b047-6ef66255090b',
    ),
  );
  $terms[] = array(
    'name' => 'Instrumente der Kompetenzmessung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Unternehmensführung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '71341b1a-ac38-4c30-93e3-371affb9d89e',
    'vocabulary_machine_name' => 'tax_morph_m_qualifikationsniveau',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Home Working',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '71600dc2-b292-4539-942c-875834347cdf',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Agrarwissenschaften',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '72c1103e-0870-4be6-97c5-35bbe59a60e2',
    'vocabulary_machine_name' => 'tax_morph_m_disziplin',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Umfrage',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '75a19f84-f298-4435-bbea-f2e9617aa1fd',
    'vocabulary_machine_name' => 'tax_morph_m_angewendete_forschungsmethode',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Empirische Untersuchung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '75dbfe1c-48b6-4f46-b84f-38641e83d94c',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 12,
    'uuid' => '7787ee53-cf9a-40f3-b2fa-2870fbd90943',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Rekursiv',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '7bdd13b0-4a3b-4928-9974-8c9684a6e829',
    'vocabulary_machine_name' => 'tax_morph_m_verlauf_der_ma_nahme_n_zum_bkm',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 8,
    'uuid' => '7c49c528-5c9f-4857-b752-0e5c15f48bd3',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Zeitarbeit',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 9,
    'uuid' => '7c876ee8-1bcf-40d3-97b8-15aa7e1cd66d',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '7d232300-5b1b-4543-b9bc-c1e314b0cb6b',
    'vocabulary_machine_name' => 'tax_morph_m_verlauf_der_ma_nahme_n_zum_bkm',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Private Haushalte mit Hauspersonal',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 12,
    'uuid' => '7db1e833-31a3-4a31-8d1d-a14aaa7e80ad',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Arbeitsbezogen',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '7f0adffa-687c-4567-abc2-778de4069d13',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => '7fdfeeb7-a400-49fa-bcc8-272f9a8d7d1b',
    'vocabulary_machine_name' => 'tax_morph_m_organisationsebene',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'nicht altersgebunden',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 8,
    'uuid' => '82943673-7f8e-4395-a3b3-a999ef5362f8',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Instrumentenentwicklung (Design Science)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '83f0ad96-576a-4ff9-98cc-d9bdf45c49fb',
    'vocabulary_machine_name' => 'tax_morph_m_forschungsziel',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Strukturwandel Region',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 9,
    'uuid' => '83f1424c-9f04-44f8-9650-e5c8ea841f7e',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Theorie',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => '87a4d322-9807-4a27-825d-9c641b7d0d8f',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Forschungsergebnis',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '88454e34-14fa-4a58-97af-8769f3f72509',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis_ziel',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Exterritoriale Organisationen und Körperschaften',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '89a1c47d-583f-48cf-b80d-b896f95a39a9',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Selbstständigkeit (mit angestellten Mitarbeitern)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '89c6ea56-f5d7-483c-b8a3-c403054c4dc5',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Methode',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '89dbbe5e-d9a7-4649-a96e-87867057fd2c',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Zufällig',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 11,
    'uuid' => '8b5015ad-fc78-4950-a76f-de49d0155521',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Fachkräftesicherung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '8db635fa-6d2a-4018-aa32-f5bd052c58cb',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Vor dem Berufsausstieg',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => '8dbe2678-5e5e-4c2d-af09-b1795e9bbf08',
    'vocabulary_machine_name' => 'tax_morph_m_lebensphasen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Crowd Working',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => '8e0d4617-100d-4dd5-8925-b7d06ac98119',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 11,
    'uuid' => '922b078f-7571-4699-b2be-d6415768125b',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Rationalisierung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '93757966-4e3f-4c77-8bdf-049bb12b3f9a',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Führungsebene / Topmanagement',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '93bba17d-255b-4c48-bb81-acaa42a5517a',
    'vocabulary_machine_name' => 'tax_morph_m_organisationsebene',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => '35-45',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => '94766c35-2f56-44d5-88fa-9ab82b348dda',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Beobachtungsbasiert - Fallstudie',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '951748d6-8a5b-4412-8bb0-954a0e3524dc',
    'vocabulary_machine_name' => 'tax_morph_m_angewendete_forschungsmethode',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kredit- und Versicherungswesen',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 10,
    'uuid' => '9552409b-8527-4b97-aab9-0f2d7d64b506',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Lernbegleitung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => '97521e91-4c02-4394-affe-bc3a54ce2000',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1f8a423c-e1c6-4fe4-90bb-9c9cc1f0a75e',
    ),
  );
  $terms[] = array(
    'name' => 'Sonstige',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => '97d0de5d-c60a-4e35-af5f-4472b069dc6e',
    'vocabulary_machine_name' => 'tax_morph_m_disziplin',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Individuumsorientiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => '9860be8f-e3c9-4a1b-a37d-f8be7ac1b926',
    'vocabulary_machine_name' => 'tax_morph_m_angewendete_forschungsmethode',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Wissenstransfer',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => '9b2bb601-1b25-4f55-bcbf-9e2a155c098f',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => '55-65',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '9cbf26c4-7fe5-450b-8ec4-75b5c04a9c10',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => '9ec8fafe-2c02-49a0-a960-835639fbdc26',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1f8a423c-e1c6-4fe4-90bb-9c9cc1f0a75e',
    ),
  );
  $terms[] = array(
    'name' => 'Gruppenorientiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'a2821f09-e62e-4f45-b9b3-62c78d8d5d8f',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1cbf7555-72fd-4795-b047-6ef66255090b',
    ),
  );
  $terms[] = array(
    'name' => 'Unbefristete Vollzeitbeschäftigung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 8,
    'uuid' => 'a43885db-337b-48a1-a65d-4581ae817f94',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Befristete Beschäftigung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'a7c5fead-1ec0-4a11-9f6a-92b1206250e0',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Im Betrieb',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => 'a82a1df8-89ca-410c-843f-45b34fff8ecb',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Kontinuierlich',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'a87513cb-26ce-4b02-b69b-e0c4d23fddbf',
    'vocabulary_machine_name' => 'tax_morph_m_verlauf_der_ma_nahme_n_zum_bkm',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'a9038e75-ac04-46ef-8413-465cf7ca7815',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Geringfügige Beschäftigung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'a926bda5-5a3a-42d9-83da-68757694d2b2',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'aa28d8cc-cba5-4759-9a63-790a78d43f5f',
    'vocabulary_machine_name' => 'tax_morph_forschungsmethodik',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Deduktive Analyse',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'aac4b956-1c9f-4f21-8553-c97f41f72de1',
    'vocabulary_machine_name' => 'tax_morph_m_angewendete_forschungsmethode',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Digitalisierung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'aae39970-faec-45df-ae66-121347426d3a',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Evaluation',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'adc159d5-2346-4493-8cc6-0fee3b25a0ab',
    'vocabulary_machine_name' => 'tax_morph_m_evaluation',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Hybride Wertschöpfung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => 'ae50fd34-db18-471f-b274-614c5817d860',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Arbeitswissenschaften',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'aef97393-c103-449a-814f-5bdf683b2c2c',
    'vocabulary_machine_name' => 'tax_morph_m_disziplin',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 12,
    'uuid' => 'b32f4a1c-656b-4a61-9f1f-6da24c785ac7',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Theorieentwicklung (Behavioral Science)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => 'b6362d3b-837f-4ffa-b890-f618d50c4bae',
    'vocabulary_machine_name' => 'tax_morph_m_forschungsziel',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Individuell',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => 'b6672bf4-436e-4559-a156-6a1fea2aad52',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Hybrid',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'b7131c14-c1ae-427e-80b0-f79093ecadfe',
    'vocabulary_machine_name' => 'tax_morph_virtualisierung',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Strukturerhebung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => 'b7402de0-5920-4c5b-a664-02a35f3220a1',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    ),
  );
  $terms[] = array(
    'name' => '< 18',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'b7adcce6-901e-4687-884d-b8f88c674360',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Physisch',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'b8aaa7ea-0494-4573-bd26-827b22cf2a83',
    'vocabulary_machine_name' => 'tax_morph_virtualisierung',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => 'b959f412-dabb-4f4a-bfc0-6cd15e523240',
    'vocabulary_machine_name' => 'tax_morph_m_funktionscluster',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Intendiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 8,
    'uuid' => 'b9e7b96a-e61f-44b7-903a-25bfb590a6a8',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Strategieentwicklung für BKM',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => 'ba480bdf-519d-4b16-a6d7-4a0914095684',
    'vocabulary_machine_name' => 'tax_morph_m_funktionscluster',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Branchenspezifik',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 15,
    'uuid' => 'c0191d72-28e3-4859-a39d-0da4afc1ff6b',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Verarbeitendes Gewerbe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 13,
    'uuid' => 'c0841374-b0e9-42e0-9eea-17d3b2bc370f',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Selbstorganisiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 10,
    'uuid' => 'c09ebe45-76c6-4461-ac44-040f946179f5',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Beobachtungsbasiert - Laborexperiment',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'c2a240c0-c4da-4024-81a4-217ef3b8b146',
    'vocabulary_machine_name' => 'tax_morph_m_angewendete_forschungsmethode',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => '25-35',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'c2a6381e-fc85-43c9-9c1d-14bea5e853d6',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Potentialanalyse',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'c5ae1639-18a1-4035-a56d-3fac3560a3b7',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    ),
  );
  $terms[] = array(
    'name' => 'Referenzanwendung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => 'c69b0400-e810-4a0c-b92b-efcbf531ca59',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    ),
  );
  $terms[] = array(
    'name' => 'Kleinstunternehmen (weniger als 10 Beschäftigte)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'c722a55d-4892-4e83-8bd4-eea64d61a8e7',
    'vocabulary_machine_name' => 'tax_morph_m_unternehmensgroesse',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kleinunternehmen (10 bis 49 Beschäftigte)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'c7d12da4-cf8d-46ec-852a-8403c883cf6f',
    'vocabulary_machine_name' => 'tax_morph_m_unternehmensgroesse',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Fachkräftemangel',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => 'c88a1877-3d53-4d0c-854e-e890fe5829ce',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Heterogene Altersstrukturen im Betrieb',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => 'c8d3c0df-29c9-41f8-9980-ea9732793734',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Befragung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'ca4e2646-4bd2-4fda-8720-5931c886bd5d',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '75dbfe1c-48b6-4f46-b84f-38641e83d94c',
    ),
  );
  $terms[] = array(
    'name' => 'Beschäftigte mit mittlerer Qualifikation',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'cbf75c22-7969-4ccb-9a59-c02bd9cf84fd',
    'vocabulary_machine_name' => 'tax_morph_m_qualifikationsniveau',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Ingenieurwissenschaften',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => 'd13105cd-6a4b-4957-af7e-50012a88e73c',
    'vocabulary_machine_name' => 'tax_morph_m_disziplin',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Angelernte und Ungelernte',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'd3ac21dc-f746-4d66-b587-97f5fd443bbb',
    'vocabulary_machine_name' => 'tax_morph_m_qualifikationsniveau',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Soziologie',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 5,
    'uuid' => 'd3c67b90-6618-487a-a20a-84345bdffa2d',
    'vocabulary_machine_name' => 'tax_morph_m_disziplin',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Entwicklung von Forschungsmethoden (Research Methodology)',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'd4261da2-80f5-4077-b2c1-e92cb4692845',
    'vocabulary_machine_name' => 'tax_morph_m_forschungsziel',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Neuentwicklung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'd4548732-b593-4615-927c-2599c667f7a4',
    'vocabulary_machine_name' => 'weiter_oder_neuentwicklung',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Arbeitsgebunden',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'd5ef2e84-3b42-4eb1-833b-f73c0d22fc4c',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Quantitativ',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'd6977155-4aff-4a5f-a8fc-1ddeb6a72352',
    'vocabulary_machine_name' => 'tax_morph_forschungsmethodik',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Migration',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 8,
    'uuid' => 'd6f08cbb-de7b-4eec-8de9-1dcf6b30a0d0',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Fischerei und Fischzucht',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => 'd7c619e5-adec-4e5f-a5db-d60ee9ab716b',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sonstiges',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => 'd809bb13-1361-4163-8f00-a0575006df46',
    'vocabulary_machine_name' => 'tax_morph_m_verlauf_der_ma_nahme_n_zum_bkm',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => '45-55',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => 'dae8b0f2-4527-4b2c-82ea-16e25585c6f9',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gender',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => 'dd276159-4ae7-44cc-8e7c-8abe7d8b828b',
    'vocabulary_machine_name' => 'tax_morph_m_rahmenbedingungen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Transferpartner',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'de22a2d9-b978-4489-a74c-f49dfc460592',
    'vocabulary_machine_name' => 'institution_funktion',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gewinnmaximierung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'e0de0c72-5f23-4811-ae36-00f7b096d050',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Operative Ebene / Shopfloor',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'e1a0dea0-24e2-4ca0-bc72-29d606e0d7dc',
    'vocabulary_machine_name' => 'tax_morph_m_organisationsebene',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Projektarbeit',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => 'e26c2e42-c56c-4ff9-ac3a-05e05031c5a3',
    'vocabulary_machine_name' => 'tax_morph_m_besch_ftigungsform',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Baby',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'e322f7f1-f678-41ea-b9e3-ba3e4fe01107',
    'vocabulary_machine_name' => 'tax_morph_m_lebensphasen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Realgruppenevaluation',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'e45d27f4-26ba-4372-925e-f89eeab09984',
    'vocabulary_machine_name' => 'tax_morph_m_evaluation',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Außerhalb des Betriebs',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'e73cc5c5-0e0a-41c9-9998-34a6bdf27394',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Coaching',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'e7982fa0-89cb-447d-bfbe-7a8983f4eb22',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1f8a423c-e1c6-4fe4-90bb-9c9cc1f0a75e',
    ),
  );
  $terms[] = array(
    'name' => '18-25',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'e8166ec3-bf76-4398-9b89-0d3da697849f',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gruppenorientiert',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'e9100b78-5bbf-4d4a-8924-9de47a69e852',
    'vocabulary_machine_name' => 'tax_morph_m_angewendete_forschungsmethode',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Simulation',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'eb7b7284-e802-4520-a82c-6c4e29116975',
    'vocabulary_machine_name' => 'tax_morph_m_angewendete_forschungsmethode',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Beschäftigungsfähigkeit',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'ebccf053-5f4c-47c3-ad3f-a1d44ac5cbe0',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Handel',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 9,
    'uuid' => 'eccf6f5a-92ee-4cca-a550-31e4e1d9fd1a',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Beschäftigte mit Leitungsfunktionen',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => 'ed918c52-f3bf-48cf-9cb8-5105d53c63a0',
    'vocabulary_machine_name' => 'tax_morph_m_qualifikationsniveau',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Reifegradmessung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => 'eeb06640-2a7b-4374-8db8-dd25a48fec61',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '70b56958-6c49-4d83-97c0-4b9476ce967f',
    ),
  );
  $terms[] = array(
    'name' => 'Leitungsebene / Mittleres Management',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'eeba7b1b-df7b-44d3-9664-bf3ecdc5539c',
    'vocabulary_machine_name' => 'tax_morph_m_organisationsebene',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => 'f02a3829-b2cf-4ec1-bd00-ae2684d79db9',
    'vocabulary_machine_name' => 'tax_morph_m_qualifikationsniveau',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Wissenstandems',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 4,
    'uuid' => 'f2a07e23-7232-4b57-9283-07347ad91aa2',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1f8a423c-e1c6-4fe4-90bb-9c9cc1f0a75e',
    ),
  );
  $terms[] = array(
    'name' => 'Kinder',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'f3a1c6a8-2bd2-4ea7-980c-5878f8a119e2',
    'vocabulary_machine_name' => 'tax_morph_m_lebensphasen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 13,
    'uuid' => 'f40b4950-5753-4bf4-8473-bec3b57d6632',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    ),
  );
  $terms[] = array(
    'name' => 'Dynamisch',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 2,
    'uuid' => 'f4776487-28bb-4efd-97ec-10564b2ce1f0',
    'vocabulary_machine_name' => 'tax_morph_m_verlauf_der_ma_nahme_n_zum_bkm',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Innovationsfähigkeit',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 3,
    'uuid' => 'f58642a6-9325-4430-bbd0-5ff761b540cb',
    'vocabulary_machine_name' => 'tax_morph_m_ziele',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kompetenzentwicklung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 0,
    'uuid' => 'f6e8923e-2ea4-4d2c-a8e7-e82fde730ab9',
    'vocabulary_machine_name' => 'tax_morph_m_funktionscluster',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Beobachtung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 1,
    'uuid' => 'f70b6dc8-f75c-4e9b-aad1-1cf7850b78ea',
    'vocabulary_machine_name' => 'tax_morph_forschungsergebnis',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '75dbfe1c-48b6-4f46-b84f-38641e83d94c',
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 9,
    'uuid' => 'f731292e-c222-426f-bb9a-3ef3afbc6d46',
    'vocabulary_machine_name' => 'tax_morph_m_altersgruppe',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gastgewerbe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 7,
    'uuid' => 'f9adc614-6e60-4e4a-b5ac-b0e7a5e95df9',
    'vocabulary_machine_name' => 'tax_morph_m_branche',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Keine Angabe',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 6,
    'uuid' => 'f9c9ef0a-c349-4a43-9ef6-0a7a3121aec4',
    'vocabulary_machine_name' => 'tax_morph_m_instrumente',
    'path' => array(
      'pathauto' => 1,
    ),
    'parent' => array(
      0 => '1f8a423c-e1c6-4fe4-90bb-9c9cc1f0a75e',
    ),
  );
  $terms[] = array(
    'name' => 'Vorgehensweisen der Kompetenzentwicklung',
    'description' => '',
    'format' => 'only_admin',
    'weight' => 19,
    'uuid' => 'fb1c9364-0bb4-42a5-8c3c-6a27a0b81f1a',
    'vocabulary_machine_name' => 'tax_morph_m_vorgehensweisen',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
