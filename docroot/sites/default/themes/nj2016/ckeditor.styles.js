/*
 Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 For licensing, see LICENSE.html or http://ckeditor.com/license
 */

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */
if(typeof(CKEDITOR) !== 'undefined') {
    CKEDITOR.addStylesSet( 'drupal',
        [
            /* Block Styles */

            // These styles are already available in the "Format" drop-down list, so they are
            // not needed here by default. You may enable them to avoid placing the
            // "Format" drop-down list in the toolbar, maintaining the same features.


            /* Inline Styles */

            // These are core styles available as toolbar buttons. You may opt enabling
            // some of them in the "Styles" drop-down list, removing them from the toolbar.

            /* Object Styles */

            //{
            //    name : 'Image on Left',
            //    element : 'img',
            //    attributes :
            //    {
            //        'style' : 'padding: 5px; margin-right: 5px',
            //        'border' : '2',
            //        'align' : 'left'
            //    }
            //},
            //
            //{
            //    name : 'Image on Right',
            //    element : 'img',
            //    attributes :
            //    {
            //        'style' : 'padding: 5px; margin-left: 5px',
            //        'border' : '2',
            //        'align' : 'right'
            //    }
            //}
            {
                name : 'Red Button',
                element : 'a',
                attributes :
                {
                    'class' : 'btn-action'
                }
            },
            {
                name : 'Yellow Button',
                element : 'a',
                attributes :
                {
                    'class' : 'btn-info'
                }
            },
            {
                name : 'Green Button',
                element : 'a',
                attributes :
                {
                    'class' : 'btn--positive'
                }
            }
        ]);
}