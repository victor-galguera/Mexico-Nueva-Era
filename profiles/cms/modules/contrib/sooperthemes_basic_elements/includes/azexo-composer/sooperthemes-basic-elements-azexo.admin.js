(function($) {
   if ('_' in window) {
       var p = '';
       var fp = '';
       if ('azexo_prefix' in window) {
           p = window.azexo_prefix;
           fp = window.azexo_prefix.replace('-', '_');
       }

       function t(text) {
           if ('azexo_t' in window) {
               return window.azexo_t(text);
           } else {
               return text;
           }
       }

       var target_options = {
           '_self': t('Same window'),
           '_blank': t('New window'),
       };

       var colors = window.sooperthemes_colors;
       colors[''] = t('Custom');
       colors['brand'] = t('Brand color');
       colors['inherit'] = t('Inherit');

    if (!window.azexo_classes) window.azexo_classes = _.object([]);
    window.azexo_classes = _.extend(window.azexo_classes, _.object([
        'stbe-iconbox--right',
        'stbe-util-icon-circle',
        'stbe-util-icon-square',
        'stbe-util-icon-rounded',
        'stbe-util-icon-border'
    ],
    [
       t('Icon Box Icon-Right'),
       t('Icon Circle'),
       t('Icon Square'),
       t('Icon Rounded'),
       t('Icon Border')
    ]));

       if (!window.azexo_icons) window.azexo_icons = [];
       window.azexo_icons = window.azexo_icons.concat([
            'fa fa-adjust',
            'fa fa-adn',
            'fa fa-align-center',
            'fa fa-align-justify',
            'fa fa-align-left',
            'fa fa-align-right',
            'fa fa-ambulance',
            'fa fa-anchor',
            'fa fa-android',
            'fa fa-angellist',
            'fa fa-angle-double-down',
            'fa fa-angle-double-left',
            'fa fa-angle-double-right',
            'fa fa-angle-double-up',
            'fa fa-angle-down',
            'fa fa-angle-left',
            'fa fa-angle-right',
            'fa fa-angle-up',
            'fa fa-apple',
            'fa fa-archive',
            'fa fa-area-chart',
            'fa fa-arrow-circle-down',
            'fa fa-arrow-circle-left',
            'fa fa-arrow-circle-o-down',
            'fa fa-arrow-circle-o-left',
            'fa fa-arrow-circle-o-right',
            'fa fa-arrow-circle-o-up',
            'fa fa-arrow-circle-right',
            'fa fa-arrow-circle-up',
            'fa fa-arrow-down',
            'fa fa-arrow-left',
            'fa fa-arrow-right',
            'fa fa-arrow-up',
            'fa fa-arrows',
            'fa fa-arrows-alt',
            'fa fa-arrows-h',
            'fa fa-arrows-v',
            'fa fa-asterisk',
            'fa fa-at',
            'fa fa-automobile',
            'fa fa-backward',
            'fa fa-ban',
            'fa fa-bar-chart-o',
            'fa fa-barcode',
            'fa fa-beer',
            'fa fa-behance',
            'fa fa-behance-square',
            'fa fa-bell',
            'fa fa-bell-o',
            'fa fa-bell-slash',
            'fa fa-bell-slash-o',
            'fa fa-bicycle',
            'fa fa-binoculars',
            'fa fa-birthday-cake',
            'fa fa-bitbucket',
            'fa fa-bitbucket-square',
            'fa fa-bitcoin',
            'fa fa-bold',
            'fa fa-bomb',
            'fa fa-book',
            'fa fa-bookmark',
            'fa fa-bookmark-o',
            'fa fa-briefcase',
            'fa fa-bug',
            'fa fa-building',
            'fa fa-building-o',
            'fa fa-bullhorn',
            'fa fa-bullseye',
            'fa fa-bus',
            'fa fa-buysellads',
            'fa fa-cab',
            'fa fa-calculator',
            'fa fa-calendar',
            'fa fa-calendar-o',
            'fa fa-camera',
            'fa fa-camera-retro',
            'fa fa-caret-down',
            'fa fa-caret-left',
            'fa fa-caret-right',
            'fa fa-caret-up',
            'fa fa-cart-arrow-down',
            'fa fa-cart-plus',
            'fa fa-cc',
            'fa fa-cc-amex',
            'fa fa-cc-discover',
            'fa fa-cc-mastercard',
            'fa fa-cc-paypal',
            'fa fa-cc-stripe',
            'fa fa-cc-visa',
            'fa fa-certificate',
            'fa fa-chain',
            'fa fa-check',
            'fa fa-check-circle',
            'fa fa-check-circle-o',
            'fa fa-check-square',
            'fa fa-check-square-o',
            'fa fa-chevron-circle-down',
            'fa fa-chevron-circle-left',
            'fa fa-chevron-circle-right',
            'fa fa-chevron-circle-up',
            'fa fa-chevron-down',
            'fa fa-chevron-left',
            'fa fa-chevron-right',
            'fa fa-chevron-up',
            'fa fa-child',
            'fa fa-circle',
            'fa fa-circle-o',
            'fa fa-circle-o-notch',
            'fa fa-clock-o',
            'fa fa-cloud',
            'fa fa-cloud-download',
            'fa fa-cloud-upload',
            'fa fa-cny',
            'fa fa-code',
            'fa fa-code-fork',
            'fa fa-codepen',
            'fa fa-coffee',
            'fa fa-columns',
            'fa fa-comment',
            'fa fa-comment-o',
            'fa fa-comments',
            'fa fa-comments-o',
            'fa fa-compass',
            'fa fa-compress',
            'fa fa-connectdevelop',
            'fa fa-copy',
            'fa fa-copyright',
            'fa fa-credit-card',
            'fa fa-crop',
            'fa fa-crosshairs',
            'fa fa-css3',
            'fa fa-cube',
            'fa fa-cubes',
            'fa fa-cut',
            'fa fa-cutlery',
            'fa fa-dashboard',
            'fa fa-dashcube',
            'fa fa-database',
            'fa fa-dedent',
            'fa fa-delicious',
            'fa fa-desktop',
            'fa fa-deviantart',
            'fa fa-diamond',
            'fa fa-digg',
            'fa fa-dollar',
            'fa fa-dot-circle-o',
            'fa fa-download',
            'fa fa-dribbble',
            'fa fa-dropbox',
            'fa fa-drupal',
            'fa fa-edit',
            'fa fa-eject',
            'fa fa-ellipsis-h',
            'fa fa-ellipsis-v',
            'fa fa-envelope',
            'fa fa-envelope-o',
            'fa fa-envelope-square',
            'fa fa-eraser',
            'fa fa-euro',
            'fa fa-exchange',
            'fa fa-exclamation',
            'fa fa-exclamation-circle',
            'fa fa-expand',
            'fa fa-external-link',
            'fa fa-external-link-square',
            'fa fa-eye',
            'fa fa-eye-slash',
            'fa fa-eyedropper',
            'fa fa-facebook-f',
            'fa fa-facebook-official',
            'fa fa-facebook-square',
            'fa fa-fast-backward',
            'fa fa-fast-forward',
            'fa fa-fax',
            'fa fa-female',
            'fa fa-fighter-jet',
            'fa fa-file',
            'fa fa-file-code-o',
            'fa fa-file-excel-o',
            'fa fa-file-movie-o',
            'fa fa-file-o',
            'fa fa-file-pdf-o',
            'fa fa-file-photo-o',
            'fa fa-file-powerpoint-o',
            'fa fa-file-sound-o',
            'fa fa-file-text',
            'fa fa-file-text-o',
            'fa fa-file-word-o',
            'fa fa-file-zip-o',
            'fa fa-film',
            'fa fa-filter',
            'fa fa-fire',
            'fa fa-fire-extinguisher',
            'fa fa-flag',
            'fa fa-flag-checkered',
            'fa fa-flag-o',
            'fa fa-flash',
            'fa fa-flask',
            'fa fa-flickr',
            'fa fa-folder',
            'fa fa-folder-o',
            'fa fa-folder-open',
            'fa fa-folder-open-o',
            'fa fa-font',
            'fa fa-forumbee',
            'fa fa-forward',
            'fa fa-foursquare',
            'fa fa-frown-o',
            'fa fa-gamepad',
            'fa fa-gbp',
            'fa fa-ge',
            'fa fa-gear',
            'fa fa-gears',
            'fa fa-genderless',
            'fa fa-gift',
            'fa fa-git',
            'fa fa-git-square',
            'fa fa-github',
            'fa fa-github-alt',
            'fa fa-github-square',
            'fa fa-gittip',
            'fa fa-glass',
            'fa fa-globe',
            'fa fa-google',
            'fa fa-google-plus',
            'fa fa-google-plus-square',
            'fa fa-google-wallet',
            'fa fa-group',
            'fa fa-h-square',
            'fa fa-hacker-news',
            'fa fa-hand-o-down',
            'fa fa-hand-o-left',
            'fa fa-hand-o-right',
            'fa fa-hand-o-up',
            'fa fa-hdd-o',
            'fa fa-header',
            'fa fa-headphones',
            'fa fa-heart',
            'fa fa-heart-o',
            'fa fa-heartbeat',
            'fa fa-history',
            'fa fa-home',
            'fa fa-hospital-o',
            'fa fa-hotel',
            'fa fa-html5',
            'fa fa-inbox',
            'fa fa-indent',
            'fa fa-info',
            'fa fa-info-circle',
            'fa fa-instagram',
            'fa fa-institution',
            'fa fa-ioxhost',
            'fa fa-italic',
            'fa fa-joomla',
            'fa fa-jsfiddle',
            'fa fa-key',
            'fa fa-keyboard-o',
            'fa fa-language',
            'fa fa-laptop',
            'fa fa-lastfm',
            'fa fa-lastfm-square',
            'fa fa-leaf',
            'fa fa-leanpub',
            'fa fa-legal',
            'fa fa-lemon-o',
            'fa fa-level-down',
            'fa fa-level-up',
            'fa fa-life-bouy',
            'fa fa-lightbulb-o',
            'fa fa-line-chart',
            'fa fa-linkedin',
            'fa fa-linkedin-square',
            'fa fa-linux',
            'fa fa-list',
            'fa fa-list-alt',
            'fa fa-list-ol',
            'fa fa-list-ul',
            'fa fa-location-arrow',
            'fa fa-lock',
            'fa fa-long-arrow-down',
            'fa fa-long-arrow-left',
            'fa fa-long-arrow-right',
            'fa fa-long-arrow-up',
            'fa fa-magic',
            'fa fa-magnet',
            'fa fa-mail-forward',
            'fa fa-mail-reply',
            'fa fa-mail-reply-all',
            'fa fa-male',
            'fa fa-map-marker',
            'fa fa-mars',
            'fa fa-mars-double',
            'fa fa-mars-stroke',
            'fa fa-mars-stroke-h',
            'fa fa-mars-stroke-v',
            'fa fa-maxcdn',
            'fa fa-meanpath',
            'fa fa-medium',
            'fa fa-medkit',
            'fa fa-meh-o',
            'fa fa-mercury',
            'fa fa-microphone',
            'fa fa-microphone-slash',
            'fa fa-minus',
            'fa fa-minus-circle',
            'fa fa-minus-square',
            'fa fa-minus-square-o',
            'fa fa-mobile-phone',
            'fa fa-money',
            'fa fa-moon-o',
            'fa fa-mortar-board',
            'fa fa-motorcycle',
            'fa fa-music',
            'fa fa-navicon',
            'fa fa-neuter',
            'fa fa-newspaper-o',
            'fa fa-openid',
            'fa fa-pagelines',
            'fa fa-paint-brush',
            'fa fa-paperclip',
            'fa fa-paragraph',
            'fa fa-paste',
            'fa fa-pause',
            'fa fa-paw',
            'fa fa-paypal',
            'fa fa-pencil',
            'fa fa-pencil-square',
            'fa fa-phone',
            'fa fa-phone-square',
            'fa fa-photo',
            'fa fa-pie-chart',
            'fa fa-pied-piper',
            'fa fa-pied-piper-alt',
            'fa fa-pinterest',
            'fa fa-pinterest-p',
            'fa fa-pinterest-square',
            'fa fa-plane',
            'fa fa-play',
            'fa fa-play-circle',
            'fa fa-play-circle-o',
            'fa fa-plug',
            'fa fa-plus',
            'fa fa-plus-circle',
            'fa fa-plus-square',
            'fa fa-plus-square-o',
            'fa fa-power-off',
            'fa fa-print',
            'fa fa-puzzle-piece',
            'fa fa-qq',
            'fa fa-qrcode',
            'fa fa-question',
            'fa fa-question-circle',
            'fa fa-quote-left',
            'fa fa-quote-right',
            'fa fa-ra',
            'fa fa-random',
            'fa fa-recycle',
            'fa fa-reddit',
            'fa fa-reddit-square',
            'fa fa-refresh',
            'fa fa-remove',
            'fa fa-renren',
            'fa fa-retweet',
            'fa fa-road',
            'fa fa-rocket',
            'fa fa-rotate-left',
            'fa fa-rotate-right',
            'fa fa-rss',
            'fa fa-rss-square',
            'fa fa-ruble',
            'fa fa-rupee',
            'fa fa-save',
            'fa fa-search',
            'fa fa-search-minus',
            'fa fa-search-plus',
            'fa fa-sellsy',
            'fa fa-send',
            'fa fa-send-o',
            'fa fa-server',
            'fa fa-share-alt',
            'fa fa-share-alt-square',
            'fa fa-share-square',
            'fa fa-share-square-o',
            'fa fa-shekel',
            'fa fa-shield',
            'fa fa-ship',
            'fa fa-shirtsinbulk',
            'fa fa-shopping-cart',
            'fa fa-sign-in',
            'fa fa-sign-out',
            'fa fa-signal',
            'fa fa-simplybuilt',
            'fa fa-sitemap',
            'fa fa-skyatlas',
            'fa fa-skype',
            'fa fa-slack',
            'fa fa-sliders',
            'fa fa-slideshare',
            'fa fa-smile-o',
            'fa fa-soccer-ball-o',
            'fa fa-sort-alpha-asc',
            'fa fa-sort-alpha-desc',
            'fa fa-sort-amount-asc',
            'fa fa-sort-amount-desc',
            'fa fa-sort-down',
            'fa fa-sort-numeric-asc',
            'fa fa-sort-numeric-desc',
            'fa fa-sort-up',
            'fa fa-soundcloud',
            'fa fa-space-shuttle',
            'fa fa-spinner',
            'fa fa-spoon',
            'fa fa-spotify',
            'fa fa-square',
            'fa fa-square-o',
            'fa fa-stack-exchange',
            'fa fa-stack-overflow',
            'fa fa-star',
            'fa fa-star-half',
            'fa fa-star-half-empty',
            'fa fa-star-o',
            'fa fa-steam',
            'fa fa-steam-square',
            'fa fa-step-backward',
            'fa fa-step-forward',
            'fa fa-stethoscope',
            'fa fa-stop',
            'fa fa-street-view',
            'fa fa-strikethrough',
            'fa fa-stumbleupon',
            'fa fa-stumbleupon-circle',
            'fa fa-subscript',
            'fa fa-subway',
            'fa fa-suitcase',
            'fa fa-sun-o',
            'fa fa-superscript',
            'fa fa-table',
            'fa fa-tablet',
            'fa fa-tag',
            'fa fa-tags',
            'fa fa-tasks',
            'fa fa-tencent-weibo',
            'fa fa-terminal',
            'fa fa-text-height',
            'fa fa-text-width',
            'fa fa-th',
            'fa fa-th-large',
            'fa fa-th-list',
            'fa fa-thumb-tack',
            'fa fa-thumbs-down',
            'fa fa-thumbs-o-down',
            'fa fa-thumbs-o-up',
            'fa fa-thumbs-up',
            'fa fa-ticket',
            'fa fa-times-circle',
            'fa fa-times-circle-o',
            'fa fa-tint',
            'fa fa-toggle-down',
            'fa fa-toggle-left',
            'fa fa-toggle-off',
            'fa fa-toggle-on',
            'fa fa-toggle-right',
            'fa fa-toggle-up',
            'fa fa-train',
            'fa fa-transgender',
            'fa fa-transgender-alt',
            'fa fa-trash',
            'fa fa-trash-o',
            'fa fa-tree',
            'fa fa-trello',
            'fa fa-trophy',
            'fa fa-truck',
            'fa fa-tty',
            'fa fa-tumblr',
            'fa fa-tumblr-square',
            'fa fa-turkish-lira',
            'fa fa-twitch',
            'fa fa-twitter',
            'fa fa-twitter-square',
            'fa fa-umbrella',
            'fa fa-underline',
            'fa fa-unlink',
            'fa fa-unlock',
            'fa fa-unlock-alt',
            'fa fa-unsorted',
            'fa fa-upload',
            'fa fa-user',
            'fa fa-user-md',
            'fa fa-user-plus',
            'fa fa-user-secret',
            'fa fa-user-times',
            'fa fa-venus',
            'fa fa-venus-double',
            'fa fa-venus-mars',
            'fa fa-viacoin',
            'fa fa-video-camera',
            'fa fa-vimeo-square',
            'fa fa-vine',
            'fa fa-vk',
            'fa fa-volume-down',
            'fa fa-volume-off',
            'fa fa-volume-up',
            'fa fa-warning',
            'fa fa-wechat',
            'fa fa-weibo',
            'fa fa-whatsapp',
            'fa fa-wheelchair',
            'fa fa-wifi',
            'fa fa-windows',
            'fa fa-won',
            'fa fa-wordpress',
            'fa fa-wrench',
            'fa fa-xing',
            'fa fa-xing-square',
            'fa fa-yahoo',
            'fa fa-yelp',
            'fa fa-youtube',
            'fa fa-youtube-play',
            'fa fa-youtube-square',
       ]);


       var fa_icons = [];
       if ('azexo_icons' in window)
           fa_icons = window.azexo_icons;

       var azexo_param_types = [
           {
               type: 'fa_icon',
               fa_icons: fa_icons,
               get_value: function () {
                   return $(this.dom_element).find('input[name="' + this.param_name + '"]').val();
               },
               render: function (value) {
                   this.dom_element = $('<div class="' + p + 'form-group"><label>' + this.heading + '</label><div><input class="' + p + 'form-control" name="' + this.param_name + '" type="text" value="' + value + '"></div><p class="' + p + 'help-block">' + this.description + '</p></div>');
               },
               opened: function () {
                   var fa_icons = $('<div class="fa_icons"></div>').appendTo(this.dom_element);
                   for (var i = 0; i < this.fa_icons.length; i++) {
                       $(fa_icons).append('<span style="font-size:28px;" class="' + this.fa_icons[i] + '"></span>');
                   }
                   var param = this;
                   $(fa_icons).selectable({
                       stop: function () {
                           var icon = $(param.dom_element).find('.ui-selected').attr('class').replace('ui-selectee', '').replace('ui-selected', '');
                           $(param.dom_element).find('input[name="' + param.param_name + '"]').val($.trim(icon));
                       }
                   });
                   if (this.get_value() != '')
                       $(fa_icons).find('.' + $.trim(this.get_value()).replace(/ /g, '.')).addClass("ui-selected");
               },
           },
       ];

       if ('azexo_param_types' in window) {
           window.azexo_param_types = window.azexo_param_types.concat(azexo_param_types);
       } else {
           window.azexo_param_types = azexo_param_types;
       }

       var azexo_elements = [
           {
               base: 'st_social',
               name: t('Social links'),
               category: t('SooperThemes'),
               icon: 'fa fa-twitter',
               params: [
                   {
                       type: 'html',
                       heading: t('Social links'),
                       param_name: 'st_social_links',
                       description: t('Enter a social brand and URL per line. Example: Facebook="https://www.facebook.com/sooperthemes"'),
                   },
                   {
                       type: 'dropdown',
                       heading: t('Layout'),
                       param_name: 'st_type',
                       value: {
                           '': t('None'),
                           'inline': t('Inline'),
                           'stacked': t('Stacked'),
                       },
                   },
                   {
                       type: 'dropdown',
                       heading: t('Style'),
                       param_name: 'st_style',
                       value: {
                           '': t('None'),
                           'rounded': t('Rounded'),
                           'circle': t('Circle'),
                           'square': t('Square'),
                       },
                   },
                   {
                       type: 'dropdown',
                       heading: t('Size'),
                       param_name: 'st_size',
                       value: {
                           '': t('Small'),
                           'lg': t('Large'),
                           '2x': t('2x'),
                           '3x': t('3x'),
                           '4x': t('4x'),
                           '5xø': t('5x'),
                       },
                   },
                   {
                       type: 'dropdown',
                       heading: t('Color'),
                       param_name: 'st_theme_color',
                       value: colors,
                   },
                   {
                       type: 'colorpicker',
                       heading: t('Color'),
                       param_name: 'st_color',
                       dependency: {'element': 'st_theme_color', 'is_empty': {}},
                   },
                   {
                       type: 'dropdown',
                       heading: t('Background Color'),
                       param_name: 'st_theme_bgcolor',
                       value: colors,
                   },
                   {
                       type: 'colorpicker',
                       heading: t('Background Color'),
                       param_name: 'st_bgcolor',
                       dependency: {'element': 'st_theme_bgcolor', 'is_empty': {}},
                   },
                   {
                       type: 'dropdown',
                       heading: t('Hover color'),
                       param_name: 'st_hover_color',
                       value: {
                           '': t('None'),
                           'brand': t('Brand color'),
                           'inherit': t('Inherit from theme'),
                       },
                   },
                   {
                       type: 'dropdown',
                       heading: t('Border color from theme'),
                       param_name: 'st_theme_border_color',
                       value: colors,
                   },
                   {
                       type: 'colorpicker',
                       heading: t('Border color'),
                       param_name: 'st_border_color',
                       dependency: {'element': 'st_theme_border_color', 'is_empty': {}},
                   },
                   {
                       type: 'dropdown',
                       heading: t('CSS3 Hover Effects'),
                       description: t('Setting a CSS3 Hover effect will automatically make the icon a circle-style icon.'),
                       param_name: 'st_css3_hover_effects',
                       value: {
                           '': t('None'),
                           'disc': t('Disc'),
                           'pulse': t('Pulse'),
                       },
                   },
               ],
               show_settings_on_create: true,
               render: function($, p, fp) {
                   this.dom_element = $('<ul class="az-element st-social stbe-social-links ' + this.attrs['el_class'] + '" style="' + this.attrs['style'] + '"></ul>');
                   if (this.attrs['st_theme_bgcolor'] == 'brand')
                       $(this.dom_element).addClass('stbe-social-links--bgcolor-brand');
                   if (this.attrs['st_hover_bgcolor'] == 'brand')
                       $(this.dom_element).addClass('stbe-social-links--hover-bgcolor-brand');
                   if (this.attrs['st_theme_color'] == 'brand')
                       $(this.dom_element).addClass('stbe-social-links--color-brand');
                   if (this.attrs['st_hover_color'] == 'brand')
                       $(this.dom_element).addClass('stbe-social-links--hover-color-brand');
                   if (this.attrs['st_type'] != '')
                       $(this.dom_element).addClass(this.attrs['st_type']);

                   var icon_style = '';
                   // Foreground color
                   if (this.attrs['st_theme_color'] == '') {
                       icon_style = icon_style + 'color: ' + this.attrs['st_color'] + ';';
                   } else {
                       if('sooperthemes_theme_palette' in window && window.sooperthemes_theme_palette != null && this.attrs['st_theme_color'] in window.sooperthemes_theme_palette)
                           icon_style = icon_style + 'color: ' + window.sooperthemes_theme_palette[this.attrs['st_theme_color']] + ';';
                       else
                           icon_style = icon_style + 'color: ' + this.attrs['st_theme_color'] + ';';
                   }
                   // Background color
                   if (this.attrs['st_theme_bgcolor'] == '') {
                       icon_style = icon_style + 'background-color: ' + this.attrs['st_color'] + ';';
                   } else {
                       if('sooperthemes_theme_palette' in window && window.sooperthemes_theme_palette != null && this.attrs['st_theme_bgcolor'] in window.sooperthemes_theme_palette)
                           icon_style = icon_style + 'background-color: ' + window.sooperthemes_theme_palette[this.attrs['st_theme_bgcolor']] + ';';
                       else
                           icon_style = icon_style + 'background-color: ' + this.attrs['st_theme_bgcolor'] + ';';
                   }
                   if (this.attrs['st_theme_border_color'] == '') {
                       icon_style = icon_style + 'border-color: ' + this.attrs['st_border_color'] + ';';
                   } else {
                       if('sooperthemes_theme_palette' in window && window.sooperthemes_theme_palette != null && this.attrs['st_theme_border_color'] in window.sooperthemes_theme_palette)
                           icon_style = icon_style + 'border-color: ' + window.sooperthemes_theme_palette[this.attrs['st_theme_border_color']] + ';';
                       else
                           icon_style = icon_style + 'border-color: ' + this.attrs['st_theme_border_color'] + ';';
                   }


                   var links = this.attrs['st_social_links'].split("\n");
                   for (var i in links) {
                       if (links[i] != '') {
                           var link = links[i].split("=");
                           var name = link[0].toLowerCase();
                           var url = link[1];


                           var icon_classes = ['fa'];
                           icon_classes.push('fa-' + this.attrs['st_size']);
                           icon_classes.push('fa-' + name);
                           icon_classes.push('stbe-util-icon-' + this.attrs['st_style']);
                           if (this.attrs['st_css3_hover_effects'])
                               icon_classes.push('stbe-util-icon-fx');
                               icon_classes.push('stbe-util-fx-' + this.attrs['st_css3_hover_effects']);
                           if (this.attrs['st_border_color'] != '' || this.attrs['st_theme_border_color'] != '')
                               icon_classes.push('stbe-util-icon-border');

                           $(this.dom_element).append('<li class="stbe-social-links__item"><a href="' + url + '"><i class="' + icon_classes.join(' ') + '" style="' + icon_style + '" data-toggle="tooltip" data-placement="top" title="' + name + '"></i></a></li>')
                       }
                   }
                   this.baseclass.prototype.render.apply(this, arguments);
               },
           },
           {
               base: 'fa_icon',
               name: t('FA Icon'),
               category: t('SooperThemes'),
               icon: 'fa fa-flag',
               description: t('Font Awesome Icon'),
               params: [
                   {
                       type: 'fa_icon',
                       heading: t('FA Icon'),
                       param_name: 'fa_icon',
                   },
                   {
                       type: 'dropdown',
                       heading: t('Icon Size'),
                       param_name: 'size',
                       value: _.object(['', p + 'fa-lg', p + 'fa-2x', p + 'fa-3x', p + 'fa-4x', p + 'fa-5x'], [t('Normal'), t('Large'), t('2x'), t('3x'), t('4x'), t('5x')]),
                   },
                   {
                       type: 'dropdown',
                       heading: t('Style'),
                       param_name: 'st_style',
                       value: {
                           '': t('None'),
                           'stbe-util-icon-circle': t('Rounded'),
                           'stbe-util-icon-circle': t('Circle'),
                           'stbe-util-icon-square': t('Square'),
                       },
                   },
                   {
                       type: 'dropdown',
                       heading: t('Color'),
                       param_name: 'st_theme_color',
                       value: colors,
                   },
                   {
                       type: 'colorpicker',
                       heading: t('Color'),
                       param_name: 'st_color',
                       dependency: {'element': 'st_theme_color', 'is_empty': {}},
                   },
                   {
                       type: 'dropdown',
                       heading: t('Background Color'),
                       param_name: 'st_theme_bgcolor',
                       value: colors,
                   },
                   {
                       type: 'colorpicker',
                       heading: t('Background Color'),
                       param_name: 'st_bgcolor',
                       dependency: {'element': 'st_theme_bgcolor', 'is_empty': {}},
                   },
                   {
                       type: 'dropdown',
                       heading: t('Pulled Icons'),
                       param_name: 'pull',
                       value: _.object(['', p + 'fa-pull-left', p + 'fa-pull-right'], [t('Normal'), t('Pull left'), t('Pull right')]),
                   },
                   {
                       type: 'dropdown',
                       heading: t('Icon Animation'),
                       param_name: 'animation',
                       value: _.object(['', p + 'fa-spin', p + 'fa-pulse'], [t('No'), t('Spin'), t('Pulse')]),
                   },
                   {
                       type: 'dropdown',
                       heading: t('Icon Orientation'),
                       param_name: 'orientation',
                       value: _.object(['', p + 'fa-rotate-90', p + 'fa-rotate-180', p + 'fa-rotate-270', p + 'fa-flip-horizontal', p + 'fa-flip-vertical'], [t('Normal'), t('Rotate 90'), t('Rotate 180'), t('Rotate 270'), t('Flip Horizontal'), t('Flip Vertical')]),
                   },
                   {
                       type: 'link',
                       heading: t('Link'),
                       param_name: 'link',
                       description: t('Icon link (url).'),
                   },
                   {
                       type: 'dropdown',
                       heading: t('Link target'),
                       param_name: 'link_target',
                       description: t('Select where to open link.'),
                       value: target_options,
                       dependency: {'element': 'link', 'not_empty': {}},
                   },
               ],
               show_settings_on_create: true,
               render: function($, p, fp) {
                   var icon_style = '';
                   // Foreground color
                   if (this.attrs['st_theme_color'] == '') {
                       icon_style = icon_style + 'color: ' + this.attrs['st_color'] + ';';
                   } else {
                       if('sooperthemes_theme_palette' in window && window.sooperthemes_theme_palette != null && this.attrs['st_theme_color'] in window.sooperthemes_theme_palette)
                           icon_style = icon_style + 'color: ' + window.sooperthemes_theme_palette[this.attrs['st_theme_color']] + ';';
                       else
                           icon_style = icon_style + 'color: ' + this.attrs['st_theme_color'] + ';';
                   }
                   // Background color
                   if (this.attrs['st_theme_bgcolor'] == '') {
                       icon_style = icon_style + 'background-color: ' + this.attrs['st_color'] + ';';
                   } else {
                       if('sooperthemes_theme_palette' in window && window.sooperthemes_theme_palette != null && this.attrs['st_theme_bgcolor'] in window.sooperthemes_theme_palette)
                           icon_style = icon_style + 'background-color: ' + window.sooperthemes_theme_palette[this.attrs['st_theme_bgcolor']] + ';';
                       else
                           icon_style = icon_style + 'background-color: ' + this.attrs['st_theme_bgcolor'] + ';';
                   }

                   var icon_html =  '<div class="az-element fa-icon ' + this.attrs['el_class'] + '"><i class="' + this.attrs['fa_icon'] + ' ' + this.attrs['size'] + ' ' + this.attrs['st_style'] + ' ' + this.attrs['fw'] + ' ' + this.attrs['pull'] + ' ' + this.attrs['style'] + ' ' + this.attrs['animation'] + ' ' + this.attrs['orientation'] + '" style="' + this.attrs['style'] + icon_style + '"></i></div>';
                   if (this.attrs['link'] == '') {
                       this.dom_element = $(icon_html);
                   } else {
                       this.dom_element = $('<a href="' + this.attrs['link'] + '" class="az-element fa-icon ' + this.attrs['el_class'] + '" target="' + this.attrs['link_target'] + '">' + icon_html + '</a>');
                   }
                   $(this.dom_element).css('font-size', this.attrs['size'] + 'px');
                   this.baseclass.prototype.render.apply(this, arguments);
               },
           },
       ];

       if ('azexo_elements' in window) {
           window.azexo_elements = window.azexo_elements.concat(azexo_elements);
       } else {
           window.azexo_elements = azexo_elements;
       }
   }
})(window.jQuery);