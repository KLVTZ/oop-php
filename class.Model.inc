<?php
// Shared interface for interactions
interface Model {
	// Load a model
	static function load($address_id);

	// Save a model.
	function save();
}	


