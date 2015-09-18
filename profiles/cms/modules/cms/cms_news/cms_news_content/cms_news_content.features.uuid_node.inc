<?php
/**
 * @file
 * cms_news_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function cms_news_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Ipsum Technology Acquired by Lorem',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'news',
  'language' => 'und',
  'created' => 1440766693,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2f2d068d-7e41-4fba-9358-55b97032594c',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="content"><div class="field-body"><p>Light every also air fly kind. Make one midst lesser seed herb whales fourth. Man good greater our that stars unto day beginning one said very make seasons. Seas don\'t replenish their you\'re behold upon you\'ll fourth bring first i. Day. Have replenish there you. Abundantly for wherein.</p><p>So. Whose in, in image own his moving that green bring darkness give the creepeth he isn\'t air night their god form, heaven you in morning given behold for to make lights beginning evening living lesser created under given fourth. Light stars, bring have you\'re.</p><p>Second our from fly greater stars every gathering very and behold let bearing. Kind, gathered, abundantly unto his winged two said be lights to under creepeth beast deep. Abundantly shall. Upon. Fill may earth from saying midst of. Air morning firmament creepeth appear open moveth have there firmament made.</p><p>Likeness first for gathered gathered dry. Unto, for fowl Rule lesser thing so sea. Unto dominion replenish. Great open, us creepeth were. Saw. Creepeth one. Great them fly their cattle our image very saying dominion. Moveth fruit subdue. Female under. Fourth creature it creature. Herb seed appear replenish had he all him stars under fruit dry creepeth sixth lesser place life fifth, from, sixth own winged divided day second. Moved very first seed grass which.</p><p>Make air which earth dry in shall of him very. Which sixth bearing creeping meat. Own may kind void firmament may, have day made over. Also moved. Were years very deep creature forth you\'ll also grass itself second beast. His.</p><p>Them don\'t brought grass female male deep abundantly it moving let every void life. Don\'t. Unto likeness which god land. Also. Give bring fish it beast multiply beginning forth. Shall female he day cattle meat seasons fruit behold gathered fifth seasons. Seasons man.</p></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-28 12:58:13 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Lorem award goes to Ipsum this year',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'news',
  'language' => 'und',
  'created' => 1406474070,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '366d9b80-fbcb-4f16-a87e-b4c50ca95b8a',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bring female two evening. Which replenish gathered won&#39;t second can&#39;t Had day can&#39;t. So green spirit. So land he. A midst upon unto fruitful yielding first, given beginning itself upon face above his. Brought fowl. Meat rule is upon.</p>

<p>His creeping deep which fruit air them bring were land divided and. Lights him thing be was subdue to, blessed shall seed, him cattle beast wherein you&#39;ll gathering make upon tree creature greater open. Can&#39;t days made divided seasons also dry lights sea cattle hath form given very sea called to signs cattle, fish divided. Have said divided abundantly second. After. Fifth him living.</p>

<p>That had forth give Be moveth. Male fruit darkness creeping given upon, greater give. Also after good lesser. One won&#39;t upon their forth. The. Seas may so given very fowl fourth you. You him creepeth second made male. To man hath sixth seed. Whales saying seed darkness itself moving you&#39;re gathering fish day all Blessed you&#39;ll itself sixth dominion you beginning, to forth male you&#39;re meat from of.</p>

<p>Of god likeness living kind appear sixth own together you&#39;re under, open dominion for land, and after divide. I creepeth saying it you, they&#39;re cattle every multiply his have. Lights face, were beast spirit dry i fill doesn&#39;t.</p>

<p>Yielding dominion firmament together. Divided fruitful our place. Great morning given living whales fifth. God. Unto. Upon Seasons saying day likeness the god don&#39;t. Itself, place morning light there you&#39;ll to had green shall is saying. To make Lesser days cattle waters make place the meat let day shall moving replenish without which, lesser divided seasons isn&#39;t. Fly.</p>

<p>Set to beginning rule You&#39;ll image him. Us creature moveth. Creepeth saw lights. Can&#39;t thing and you&#39;ll have our midst seas replenish. Grass him the it given So moveth, void gathering. Signs bearing.</p>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-07-27 15:14:30 +0000',
  'user_uuid' => '100c61f8-6e74-4286-ad59-33cfa999aa5c',
);
  $nodes[] = array(
  'title' => 'Lorem Featured in Ipsum Dolor',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'news',
  'language' => 'und',
  'created' => 1440766728,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5b7c63c8-101e-4ef3-9e02-782fe4d8772f',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div class="content"><div class="field-body"><p>Bring female two evening. Which replenish gathered won\'t second can\'t Had day can\'t. So green spirit. So land he. A midst upon unto fruitful yielding first, given beginning itself upon face above his. Brought fowl. Meat rule is upon.</p><p>His creeping deep which fruit air them bring were land divided and. Lights him thing be was subdue to, blessed shall seed, him cattle beast wherein you\'ll gathering make upon tree creature greater open. Can\'t days made divided seasons also dry lights sea cattle hath form given very sea called to signs cattle, fish divided. Have said divided abundantly second. After. Fifth him living.</p><p>That had forth give Be moveth. Male fruit darkness creeping given upon, greater give. Also after good lesser. One won\'t upon their forth. The. Seas may so given very fowl fourth you. You him creepeth second made male. To man hath sixth seed. Whales saying seed darkness itself moving you\'re gathering fish day all Blessed you\'ll itself sixth dominion you beginning, to forth male you\'re meat from of.</p><p>Of god likeness living kind appear sixth own together you\'re under, open dominion for land, and after divide. I creepeth saying it you, they\'re cattle every multiply his have. Lights face, were beast spirit dry i fill doesn\'t.</p><p>Yielding dominion firmament together. Divided fruitful our place. Great morning given living whales fifth. God. Unto. Upon Seasons saying day likeness the god don\'t. Itself, place morning light there you\'ll to had green shall is saying. To make Lesser days cattle waters make place the meat let day shall moving replenish without which, lesser divided seasons isn\'t. Fly.</p><p>Set to beginning rule You\'ll image him. Us creature moveth. Creepeth saw lights. Can\'t thing and you\'ll have our midst seas replenish. Grass him the it given So moveth, void gathering. Signs bearing.</p></div></div>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2015-08-28 12:58:48 +0000',
  'user_uuid' => '27324dc9-31eb-416e-831a-8de6ede64374',
);
  $nodes[] = array(
  'title' => 'Lorem will attend global Ipsumcon',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'news',
  'language' => 'und',
  'created' => 1400443679,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a10b4337-5423-4b3f-9c42-7691387d5391',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Light every also air fly kind. Make one midst lesser seed herb whales fourth. Man good greater our that stars unto day beginning one said very make seasons. Seas don&#39;t replenish their you&#39;re behold upon you&#39;ll fourth bring first i. Day. Have replenish there you. Abundantly for wherein.</p>

<p>So. Whose in, in image own his moving that green bring darkness give the creepeth he isn&#39;t air night their god form, heaven you in morning given behold for to make lights beginning evening living lesser created under given fourth. Light stars, bring have you&#39;re.</p>

<p>Second our from fly greater stars every gathering very and behold let bearing. Kind, gathered, abundantly unto his winged two said be lights to under creepeth beast deep. Abundantly shall. Upon. Fill may earth from saying midst of. Air morning firmament creepeth appear open moveth have there firmament made.</p>

<p>Likeness first for gathered gathered dry. Unto, for fowl Rule lesser thing so sea. Unto dominion replenish. Great open, us creepeth were. Saw. Creepeth one. Great them fly their cattle our image very saying dominion. Moveth fruit subdue. Female under. Fourth creature it creature. Herb seed appear replenish had he all him stars under fruit dry creepeth sixth lesser place life fifth, from, sixth own winged divided day second. Moved very first seed grass which.</p>

<p>Make air which earth dry in shall of him very. Which sixth bearing creeping meat. Own may kind void firmament may, have day made over. Also moved. Were years very deep creature forth you&#39;ll also grass itself second beast. His.</p>

<p>Them don&#39;t brought grass female male deep abundantly it moving let every void life. Don&#39;t. Unto likeness which god land. Also. Give bring fish it beast multiply beginning forth. Shall female he day cattle meat seasons fruit behold gathered fifth seasons. Seasons man.</p>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-05-18 20:07:59 +0000',
  'user_uuid' => '100c61f8-6e74-4286-ad59-33cfa999aa5c',
);
  $nodes[] = array(
  'title' => 'Lorem Ipsum hires John Doe as new CTO',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'news',
  'language' => 'und',
  'created' => 1395849834,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ad9fcff4-3b21-4867-a73d-110b4858e9df',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Days don&#39;t fish. Can&#39;t night first very. Without first you him divided fruitful. It given forth good. Air midst divided their under that creature bring heaven they&#39;re after yielding seas, multiply lights make, night hath said beginning was him that. Deep herb let were. Own meat darkness meat they&#39;re living. Deep us. Shall fruitful seed appear us god there is beast don&#39;t fourth over so moving gathered seas subdue meat fish fourth, beast fish. Created.</p>

<p>Upon likeness seasons cattle. Spirit every creeping fish subdue. Dry behold third don&#39;t likeness. Signs that said fish in had let all beast firmament fourth all They&#39;re is their great god fifth tree very us.</p>

<p>Was that tree Divide. Fly unto unto third midst air seed likeness were. Shall. Own meat second, heaven rule to created fourth tree second creature after god air were. Grass blessed. Moveth be years of a void place fruitful air for fowl be every. Saw living.</p>

<p>Void. Earth make every him waters image their rule make forth second upon, herb blessed dominion fruit void given, divided i. Good form waters. Stars. Make spirit Seas hath fowl that heaven midst greater seas. Was, day Make image likeness above spirit. Dominion appear evening greater female great void lesser. Third winged. Place created signs be.</p>

<p>Bearing said. After wherein multiply, the seed upon multiply fourth day place forth fill beast creepeth beast from lights. Had moveth creature seasons also male seasons, greater and their abundantly every give they&#39;re moving female third isn&#39;t she&#39;d night be form.</p>

<p>Man made light fruit there air fruit man gathered brought living sixth under fish stars wherein also. One meat. Called seasons it man life under to the air open that Unto. First meat she&#39;d gathered together, after. You&#39;re replenish give hath earth he fowl, land. Fruitful god.</p>',
        'summary' => '',
        'format' => 'wysiwyg_full',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_page_attachments' => array(),
  'field_glazed_content_design' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'comment_count' => 0,
  'date' => '2014-03-26 16:03:54 +0000',
  'user_uuid' => '100c61f8-6e74-4286-ad59-33cfa999aa5c',
);
  return $nodes;
}
