
Thhis module provides a simple integration using the 
Eventebrite REST API with JSON output. See:

http://developer.eventbrite.com/doc/events/event_list_attendees/

You must create your event and possibly set up questions for
each attendee in advance. You also need to acquire an App
key for your Drupal site. See:

https://www.eventbrite.com/api/key/#mykeys

To find you event ID, lok at the URL while editing
your event, it should look like:

http://www.eventbrite.com/edit?eid=1587543824

The event ID is the value of the eid parameter.

You may wish to give attndees the option to opt out of
being listed - if so, configure a checkbox type question
that if checked indicates an opt out.  The question ID will
need to be set in the configuration.

