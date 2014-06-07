<?php

// MySQLi database; only one connection

class Database {
	private $_connection;
	// store the single instance
	private static $_instance;

	// get am instance of the Database
	public static function getInstance() {
		if(!self::$_instance) {
			self::$_instance = new self();
		}
		return self::$_instance;
	}

	// constructor
	public function __construct() {
		$this->_connection = new mysqli('localhost', 'root', 'battosai', 'oop_php');
		// error handling
		if(mysqli_connect_error()) {
			trigger_error('Failed to connect to MySQL: ' . mysqli_connect_error(), E_USER_ERROR);
		}
	}

	private function __clone() {}
	
	public function getConnection() {
		return $this->_connection;
	}
}



?> 
