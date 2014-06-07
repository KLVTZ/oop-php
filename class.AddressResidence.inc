<?php

// Residential Address.
class AddressResidence extends Address {
	protected function _init() {
		// initialize
		$this->_setAddressTypeid(Address::ADDRESS_TYPE_RESIDENCE);
	}

}
?>
