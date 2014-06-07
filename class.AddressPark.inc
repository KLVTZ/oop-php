<?php

// Park Address.
class AddressPark extends Address {
		protected function _init() {
		// initialize
		$this->_setAddressTypeid(Address::ADDRESS_TYPE_PARK);
	}

}
?>
