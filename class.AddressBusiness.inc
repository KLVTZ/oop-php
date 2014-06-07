<?php

// Business Address.
class AddressBusiness extends Address {
	protected function _init() {
		// initialize
		$this->_setAddressTypeid(Address::ADDRESS_TYPE_BUSINESS);
	}
}
?>
