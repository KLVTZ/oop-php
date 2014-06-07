<?php

class ExceptionAddress extends Exception {
	// magi __toString() -returns string
	public function __tostring() {
		return __CLASS__ . ": [{$this->code}]: {$this->message}\n";
	}
}

